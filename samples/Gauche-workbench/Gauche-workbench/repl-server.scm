(use gauche.net)
(use gauche.selector)
(use gauche.threads)

;; NB: Although we use gauche.selector, once a client connection is
;; accepted we loop inside the client handler.  So the next connection
;; won't be accepted until the active client disconnects.
(define (start-server key)
  (let* ([servers (make-server-sockets #f 0)]
         [port (sockaddr-port (socket-getsockname (car servers)))]
         [sel (make <selector>)])
    (dolist [s servers]
      (selector-add! sel (socket-fd s) (^[_ f] (handler s key)) '(r)))
    (thread-start!
     (make-thread (^[] (do () (#f) (selector-select sel)))))
    port))

(define (handler sock key)
  (let1 client (socket-accept sock)
    (unwind-protect
      (with-ports
          (socket-input-port client)
          (socket-output-port client)
          (socket-output-port client)
        (^[]
         (and (challenge key)
              (read-eval-print-loop))))
      (socket-shutdown client SHUT_RDWR)
      (socket-close client))))

(define (challenge key)
  (let loop ([try 0])
    (if (>= try 3)
      (begin (display "Sorry.\n") (flush) #f)
      (begin (display "Enter key: ")
             (flush)
             (let1 line (read-line)
               (cond [(eof-object? line) #f]
                     [(eqv? key (string->number line))]
                     [else (loop (+ try 1))]))))))
