/* Generated by gauche.cgen */
#include <Gauche-iOS-core/gauche.h>
static const char *code = 
"(use gauche.net)\012"
"(use gauche.selector)\012"
"(use gauche.threads)\012"
"\012"
";; NB: Although we use gauche.selector, once a client connection is\012"
";; accepted we loop inside the client handler.  So the next connection\012"
";; won't be accepted until the active client disconnects.\012"
"(define (start-server key)\012"
"  (let* ([servers (make-server-sockets #f 0)]\012"
"         [port (sockaddr-port (socket-getsockname (car servers)))]\012"
"         [sel (make <selector>)])\012"
"    (dolist [s servers]\012"
"      (selector-add! sel (socket-fd s) (^[_ f] (handler s key)) '(r)))\012"
"    (thread-start!\012"
"     (make-thread (^[] (do () (#f) (selector-select sel)))))\012"
"    port))\012"
"\012"
"(define (handler sock key)\012"
"  (let1 client (socket-accept sock)\012"
"    (unwind-protect\012"
"      (with-ports\012"
"          (socket-input-port client)\012"
"          (socket-output-port client)\012"
"          (socket-output-port client)\012"
"        (^[]\012"
"         (and (challenge key)\012"
"              (read-eval-print-loop))))\012"
"      (socket-shutdown client SHUT_RDWR)\012"
"      (socket-close client))))\012"
"\012"
"(define (challenge key)\012"
"  (let loop ([try 0])\012"
"    (if (>= try 3)\012"
"      (begin (display \042Sorry.\134n\042) (flush) #f)\012"
"      (begin (display \042Enter key: \042)\012"
"             (flush)\012"
"             (let1 line (read-line)\012"
"               (cond [(eof-object\077 line) #f]\012"
"                     [(eqv\077 key (string->number line))]\012"
"                     [else (loop (+ try 1))]))))))\012"
"\012"
"\012"
"\012"
"\012"
;
ScmObj load_repl_server() {
  ScmLoadPacket lpak;
  Scm_LoadPacketInit(&lpak);
  ScmObj ip = Scm_MakeInputStringPort(SCM_STRING(SCM_MAKE_STR(code)), TRUE);
  int r = Scm_LoadFromPort(SCM_PORT(ip), 0, &lpak);
  if (r < 0) return lpak.exception;
  else return SCM_TRUE;
}
