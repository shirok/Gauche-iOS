(use gauche.net)
(use gauche.selector)
(use gauche.threads)

;; NB: Although we use gauche.selector, once a client connection is
;; accepted we loop inside the client handler.  So the next connection
;; won't be accepted until the active client disconnects.
(define (start-server)
  (let* ([servers (make-server-sockets #f 0)]
         [port (sockaddr-port (socket-getsockname (car servers)))]
         [sel (make <selector>)])
    (dolist [s servers]
      (selector-add! sel (socket-fd s) (^[_ f] (handler s)) '(r)))
    (thread-start!
     (make-thread (^[] (do () (#f) (selector-select sel)))))
    port))

(define (handler sock)
  (let1 client (socket-accept sock)
    (with-ports
        (socket-input-port client)
        (socket-output-port client)
        (socket-output-port client)
      read-eval-print-loop)))
         
