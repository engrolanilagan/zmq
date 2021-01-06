#ifndef __ZMQ_PLATFORM_HPP_INCLUDED__
#define __ZMQ_PLATFORM_HPP_INCLUDED__

//Define the platform params for NuttX
//
//
#define ZMQ_IOTHREAD_POLLER_USE_POLL
#define ZMQ_POLL_BASED_ON_POLL
#define ZMQ_HAVE_EVENTID
#define ZMQ_USE_BUILTIN_SHA1
#define ZMQ_USE_CV_IMPL_NONE
#define ZMQ_HAVE_WS
#define ZMQ_HAVE_IPC
#define ZMQ_HAVE_EVENTFD
//#define ZMQ_HAVE_VXWORKS
//#define ZMQ_HAVE_NUTTX
#define ZMQ_HAVE_STRLCPY
#define HAVE_STRNLEN
//#define HAVE_FORK
#define ZMQ_HAVE_UIO //solves the iovec error
#ifndef NI_MAXHOST
#define NI_MAXHOST 1025
#endif
//#define ZMQ_HAVE_LINUX

//#if defined ZMQ_HAVE_LINUX
#   define ZMQ_USE_EPOLL 1
//#   define HAVE_POSIX_MEMALIGN
//#   define ZMQ_HAVE_EVENTFD 1
#   define ZMQ_HAVE_IFADDRS 1
#   define ZMQ_HAVE_SOCK_CLOEXEC 1
//#   define ZMQ_HAVE_SO_BINDTODEVICE 1
#   define ZMQ_HAVE_SO_KEEPALIVE 1
//#   define ZMQ_HAVE_SO_PEERCRED 1
#   define ZMQ_HAVE_TCP_KEEPCNT 1
#   define ZMQ_HAVE_TCP_KEEPIDLE 1
#   define ZMQ_HAVE_TCP_KEEPINTVL 1
//#   define ZMQ_HAVE_UIO 1
#   define HAVE_CLOCK_GETTIME 1
//#   define HAVE_FORK 1
//#   define HAVE_ACCEPT4 1
//#endif




#endif

