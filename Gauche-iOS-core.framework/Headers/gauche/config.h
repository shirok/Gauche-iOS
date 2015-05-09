/* src/gauche/config.h.  Generated from config.h.in by configure.  */
/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define if Gauche handles multi-byte character as EUC-JP */
/* #undef GAUCHE_CHAR_ENCODING_EUC_JP */

/* Define if Gauche handles multi-byte character as Shift JIS */
/* #undef GAUCHE_CHAR_ENCODING_SJIS */

/* Define if Gauche handles multi-byte character as UTF-8 */
#define GAUCHE_CHAR_ENCODING_UTF_8 1

/* Gauche major version number */
#define GAUCHE_MAJOR_VERSION 0

/* Gauche minor version number */
#define GAUCHE_MINOR_VERSION 9

/* Gauche patch level number */
#define GAUCHE_MICRO_VERSION 5

/* Define if we use pthreads */
#define GAUCHE_USE_PTHREADS 1

/* Define if we use win32 threads */
/* #undef GAUCHE_USE_WTHREADS */

/* Define if you use axTLS for TLS/SSL*/
#define GAUCHE_USE_AXTLS 1

/* Define if you use openssl for TLS/SSL*/
/* #undef GAUCHE_USE_OPENSSL */

/* Gauche ABI version string */
#define GAUCHE_ABI_VERSION "0.9"

/* Gauche version string */
#define GAUCHE_VERSION "0.9.5_pre1"

/* Gauche signature string */
#define GAUCHE_SIGNATURE "0.9,utf8,pthreads"

/* Define if bilding as a framework on MacOSX */
/* #undef GAUCHE_MACOSX_FRAMEWORK */

/* Define number of args gethostbyaddr_r takes */
/* #undef GETHOSTBYADDR_R_NUMARGS */

/* Define number of args gethostbyname_r takes */
/* #undef GETHOSTBYNAME_R_NUMARGS */

/* Define number of args getprotobyname_r takes */
/* #undef GETPROTOBYNAME_R_NUMARGS */

/* Define number of args getprotobynumber_r takes */
/* #undef GETPROTOBYNUMBER_R_NUMARGS */

/* Define number of args getservbyname_r takes */
/* #undef GETSERVBYNAME_R_NUMARGS */

/* Define number of args getservbyport_r takes */
/* #undef GETSERVBYPORT_R_NUMARGS */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if the system has clearenv */
/* #undef HAVE_CLEARENV */

/* Define to 1 if the system has clock_getres */
/* #undef HAVE_CLOCK_GETRES */

/* Define to 1 if the system has clock_gettime */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if the system has crt_extern.h */
#define HAVE_CRT_EXTERNS_H 1

/* Define if uses libcrypt */
#define HAVE_CRYPT 1

/* Define to 1 if you have the <crypt.h> header file. */
/* #undef HAVE_CRYPT_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if the system has dlopen() */
#define HAVE_DLOPEN 1

/* Define if you have forkpty */
#define HAVE_FORKPTY 1

/* Define if you have fpsetprec */
/* #undef HAVE_FPSETPREC */

/* Define if you have fpu_control.h */
/* #undef HAVE_FPU_CONTROL_H */

/* Define to 1 if the system has getdomainname */
#define HAVE_GETDOMAINNAME 1

/* Define to 1 if the system has gethostname */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have getloadavg function. */
#define HAVE_GETLOADAVG 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if the systen has getpgid */
#define HAVE_GETPGID 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <glob.h> header file. */
#define HAVE_GLOB_H 1

/* Define if you have iconv.h and want to use it */
#define HAVE_ICONV_H 1

/* Define if you have IPv6 support */
#define HAVE_IPV6 1

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* Define to 1 if you have the `isinf' function. */
#define HAVE_ISINF 1

/* Define to 1 if you have the `isnan' function. */
#define HAVE_ISNAN 1

/* Define to 1 if you have the `lchown' function. */
#define HAVE_LCHOWN 1

/* Define to 1 if you have the `lgamma' function. */
#define HAVE_LGAMMA 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the <libutil.h> header file. */
/* #undef HAVE_LIBUTIL_H */

/* Define to 1 if you have the <bsd/libutil.h> header file. */
/* #undef HAVE_BSD_LIBUTIL_H */

/* Define to 1 if you have the `lrand48' function. */
#define HAVE_LRAND48 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define if you have openpty */
#define HAVE_OPENPTY 1

/* Define to 1 if you have pthread_spin_init. */
/* #undef HAVE_PTHREAD_SPINLOCK_T */

/* Define to 1 if you have the <pty.h> header file. */
/* #undef HAVE_PTY_H */

/* Define to 1 if the system has putenv */
#define HAVE_PUTENV 1

/* Define to 1 if you have the `random' function. */
#define HAVE_RANDOM 1

/* Define to 1 if you have the `readlink' function. */
#define HAVE_READLINK 1

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the `rint' function. */
#define HAVE_RINT 1

/* Define to 1 if you have the <rpc/types.h> header file. */
#define HAVE_RPC_TYPES_H 1

/* Define to 1 if you have the <malloc.h> header file. */
/* #undef HAVE_MALLOC_H */

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define if uses librt */
#define HAVE_SCHED_YIELD 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if the system has setdomainname */
#define HAVE_SETDOMAINNAME 1

/* Define to 1 if the system has setenv */
#define HAVE_SETENV 1

/* Define to 1 if the system has sethostname */
#define HAVE_SETHOSTNAME 1

/* Define to 1 if you have the `setlogmask' function. */
#define HAVE_SETLOGMASK 1

/* Define to 1 if you have the `sigwait' function. */
#define HAVE_SIGWAIT 1

/* Define to 1 if you have the `setpgrp' function. */
/* #undef HAVE_SETPGRP */

/* Define to 1 if you have the `srand48' function. */
#define HAVE_SRAND48 1

/* Define to 1 if you have the `srandom' function. */
#define HAVE_SRANDOM 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define if "struct group" has gr_passwd */
#define HAVE_STRUCT_GROUP_GR_PASSWD 1

/* Define if you have "struct ifreq" */
#define HAVE_STRUCT_IFREQ 1

/* Define if "struct ifreq" have a member ifr_ifindex */
/* #undef HAVE_STRUCT_IFREQ_IFR_IFINDEX */

/* Define if "struct ifreq" have a member ifr_index */
/* #undef HAVE_STRUCT_IFREQ_IFR_INDEX */

/* Define if "struct passwd" has pw_class */
#define HAVE_STRUCT_PASSWD_PW_CLASS 1

/* Define if "struct passwd" has pw_gecos */
#define HAVE_STRUCT_PASSWD_PW_GECOS 1

/* Define if "struct passwd" has pw_passwd */
#define HAVE_STRUCT_PASSWD_PW_PASSWD 1

/* Define if struct sockaddr_un has sun_len */
#define HAVE_STRUCT_SOCKADDR_UN_SUN_LEN 1

/* Define if struct sockaddr_in has sin_len */
#define HAVE_STRUCT_SOCKADDR_IN_SIN_LEN 1

/* Define if struct sockaddr_in6 has sin6_len */
#define HAVE_STRUCT_SOCKADDR_IN6_SIN6_LEN 1

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if the system has the type `struct timespec'. */
#define HAVE_STRUCT_TIMESPEC 1

/* Define to 1 if the system has sunmath.h (Solaris specific). */
/* #undef HAVE_SUNMATH_H */

/* Define to 1 if you have the `symlink' function. */
#define HAVE_SYMLINK 1

/* Define to 1 if you have the `syslog' function. */
#define HAVE_SYSLOG 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have sys/loadavg.h */
/* #undef HAVE_SYS_LOADAVG_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `tgamma' function. */
#define HAVE_TGAMMA 1

/* Define to 1 if you have the `trunc' function. */
#define HAVE_TRUNC 1

/* Define to 1 if the system has these types. */
#define HAVE_INT32_T 1
#define HAVE_INT64_T 1
#define HAVE_UINT16_T 1
#define HAVE_UINT32_T 1
#define HAVE_UINT64_T 1
#define HAVE_LONG_DOUBLE 1
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has unsetenv */
#define HAVE_UNSETENV 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the <util.h> header file. */
#define HAVE_UTIL_H 1

/* Define if iconv takes const char **input */
/* #undef ICONV_CONST_INPUT */

/* Define if time_t is typedef'ed to an integral type */
#define INTEGRAL_TIME_T 1

/* Directory where libtool places the compiled libraries */
/* #undef SCM_LIBTOOL_OBJDIR */

/* Define to use i386 optimizations */
#define SCM_TARGET_I386 1

/* Define to use x86_64 optimizations */
/* #undef SCM_TARGET_X86_64 */

/* Define to the suffix of dynamic loadable object */
#define SHLIB_SO_SUFFIX "so"

/* The size of a `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of a `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of a `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of a `rlim_t', as computed by sizeof. */
#define SIZEOF_RLIM_T 8

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
        STACK_DIRECTION > 0 => grows toward higher addresses
        STACK_DIRECTION < 0 => grows toward lower addresses
        STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
/* #undef STDC_HEADERS */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Define if endian of double can be ARM style (each 32bit word is little
   endian, but the lower 32bit word comes after the upper 32bit word.)
   ARM processors can be configured with this mixed endian or ordinary
   consistent endian, so if this is defined, we check the endian at
   runtime. */
/* #undef DOUBLE_ARMENDIAN */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define as `__inline' if that's what the C compiler calls it, or to nothing
   if it is not supported. */
/* #undef inline */

/*=========================================================================
 * NOTE: The definition of the following preprocessor variables may affect
 * the behavior of the systems libraries.  If you link your code to libgauche,
 * generally your code needs to be configured as the same flags as defined
 * here.
 */

/* Define POSIX C version */
/* #undef _POSIX_C_SOURCE */

/* Define when using Solaris pthreads to get pthread compatible API. */
/* #undef _POSIX_PTHREAD_SEMANTICS */

/* Define to use reentrant libc */
/* #undef _REENTRANT */

/* Define the number of bits in off_t */
/* #undef _FILE_OFFSET_BITS */

/* Define if this flag is needed for large file support */
/* #undef _LARGE_FILES */

/*
 * Local variables:
 * mode: C
 * end:
 */
