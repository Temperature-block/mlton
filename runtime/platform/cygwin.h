#include <limits.h>
#include <process.h>
#include <sys/resource.h>
#include <windows.h>

#include "gmp.h"

#include "ptrace.h"

#define HAS_MREMAP FALSE
#define HAS_SIGALTSTACK FALSE
#define HAS_TIME_PROFILING FALSE
#define HAS_WEAK 0
#define USE_VIRTUAL_ALLOC TRUE

#define _SC_BOGUS 0xFFFFFFFF
#define _SC_2_FORT_DEV _SC_BOGUS
#define _SC_2_FORT_RUN _SC_BOGUS
#define _SC_2_SW_DEV _SC_BOGUS
#define _SC_2_VERSION _SC_BOGUS
#define _SC_BC_BASE_MAX _SC_BOGUS
#define _SC_BC_DIM_MAX _SC_BOGUS
#define _SC_BC_SCALE_MAX _SC_BOGUS
#define _SC_BC_STRING_MAX _SC_BOGUS
#define _SC_COLL_WEIGHTS_MAX _SC_BOGUS
#define _SC_EXPR_NEST_MAX _SC_BOGUS
#define _SC_LINE_MAX _SC_BOGUS
#define _SC_RE_DUP_MAX _SC_BOGUS
#define _SC_STREAM_MAX _SC_BOGUS

#define MSG_DONTWAIT 0
#define PF_INET6 0

struct sockaddr_in6 {};

