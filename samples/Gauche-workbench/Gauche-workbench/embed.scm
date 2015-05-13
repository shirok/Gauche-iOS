(use util.match)
(use file.util)
(use gauche.cgen)
(use gauche.parameter)
(use gauche.generator)

(define (main args)
  (match (cdr args)
    [(file) (doit file)]
    [_ (exit 1 "Usage: gosh embed.scm <input.scm>")]))

(define (doit file)
  (define name (sys-basename (path-sans-extension file)))
  (define initname (cgen-safe-name-friendly name))
  (define unit
    (make <cgen-unit>
      :name name
      :c-name (path-swap-extension file "c")
      :init-prologue #"ScmObj load_~initname() {"))
  (parameterize ([cgen-current-unit unit])
    (cgen-decl "#include <Gauche-iOS-core/gauche.h>")
    (cgen-decl "static const char *code = ")
    (do-generator [line (file->line-generator file)]
       (cgen-decl (cgen-safe-string (string-append line "\n"))))
    (cgen-decl ";")
    (cgen-init "  ScmLoadPacket lpak;"
               "  Scm_LoadPacketInit(&lpak);"
               "  ScmObj ip = Scm_MakeInputStringPort(SCM_STRING(SCM_MAKE_STR(code)), TRUE);"
               "  int r = Scm_LoadFromPort(SCM_PORT(ip), 0, &lpak);"
               "  if (r < 0) return lpak.exception;"
               "  else return SCM_TRUE;"))
  (cgen-emit-c unit)
  0)

