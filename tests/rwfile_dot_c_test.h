/*
 * This file is automatically generated by UnitTestBot. For further information see https://www.utbot.org
 */

namespace UTBot {
#define typeid typeid_
#define throw throw_
#define thread_local thread_local_
#define template template_
#define static_cast static_cast_
#define requires requires_
#define public public_
#define protected protected_
#define reflexpr reflexpr_
#define operator operator_
#define noexcept noexcept_
#define new new_
#define namespace namespace_
#define mutable mutable_
#define try try_
#define private private_
#define friend friend_
#define virtual virtual_
#define nullptr nullptr_
#define export export_
#define this this_
#define explicit explicit_
#define typename typename_
#define delete delete_
#define decltype decltype_
#define co_yield co_yield_
#define co_return co_return_
#define co_await co_await_
#define const_cast const_cast_
#define constinit constinit_
#define consteval consteval_
#define class class_
#define synchronized synchronized_
#define char32_t char32_t_
#define constexpr constexpr_
#define char8_t char8_t_
#define catch catch_
#define using using_
#define char16_t char16_t_
#define atomic_noexcept atomic_noexcept_
#define concept concept_
#define atomic_commit atomic_commit_
#define static_assert static_assert_
#define atomic_cancel atomic_cancel_
#define dynamic_cast dynamic_cast_
#define asm asm_
#define reinterpret_cast reinterpret_cast_
#define alignof alignof_
#define alignas alignas_
#define _Alignas(x)
#define _Atomic(x) x
#define _Bool bool
#define _Noreturn
#define _Thread_local thread_local

struct __va_list_tag;
typedef unsigned long size_t;

#define wchar_t int
#ifdef __GNUC__
#  include <features.h>
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef float _Float32;
#  endif
#else
typedef float _Float32;
#endif

#ifdef __GNUC__
#  include <features.h>
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef double _Float64;
#  endif
#else
typedef double _Float64;
#endif

#ifdef __GNUC__
#  include <features.h>
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef double _Float32x;
#  endif
#else
typedef double _Float32x;
#endif

#ifdef __GNUC__
#  include <features.h>
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef long double _Float64x;
#  endif
#else
typedef long double _Float64x;
#endif

typedef struct {
    int quot;
    int rem;
} div_t;

typedef struct {
    long quot;
    long rem;
} ldiv_t;

typedef struct {
    long long quot;
    long long rem;
} lldiv_t;

typedef unsigned char __u_char;

typedef unsigned short __u_short;

typedef unsigned int __u_int;

typedef unsigned long __u_long;

typedef signed char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long __int64_t;

typedef unsigned long __uint64_t;

typedef __int8_t __int_least8_t;

typedef __uint8_t __uint_least8_t;

typedef __int16_t __int_least16_t;

typedef __uint16_t __uint_least16_t;

typedef __int32_t __int_least32_t;

typedef __uint32_t __uint_least32_t;

typedef __int64_t __int_least64_t;

typedef __uint64_t __uint_least64_t;

typedef long __quad_t;

typedef unsigned long __u_quad_t;

typedef long __intmax_t;

typedef unsigned long __uintmax_t;

typedef unsigned long __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long __ino_t;

typedef unsigned long __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long __nlink_t;

typedef long __off_t;

typedef long __off64_t;

typedef int __pid_t;

typedef struct {
    int __val[2];
} __fsid_t;

typedef long __clock_t;

typedef unsigned long __rlim_t;

typedef unsigned long __rlim64_t;

typedef unsigned int __id_t;

typedef long __time_t;

typedef unsigned int __useconds_t;

typedef long __suseconds_t;

typedef long __suseconds64_t;

typedef int __daddr_t;

typedef int __key_t;

typedef int __clockid_t;

typedef void *__timer_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef long __blkcnt64_t;

typedef unsigned long __fsblkcnt_t;

typedef unsigned long __fsblkcnt64_t;

typedef unsigned long __fsfilcnt_t;

typedef unsigned long __fsfilcnt64_t;

typedef long __fsword_t;

typedef long __ssize_t;

typedef long __syscall_slong_t;

typedef unsigned long __syscall_ulong_t;

typedef __off64_t __loff_t;

typedef char *__caddr_t;

typedef long __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef __u_char u_char;

typedef __u_short u_short;

typedef __u_int u_int;

typedef __u_long u_long;

typedef __quad_t quad_t;

typedef __u_quad_t u_quad_t;

typedef __fsid_t fsid_t;

typedef __loff_t loff_t;

typedef __ino_t ino_t;

typedef __dev_t dev_t;

typedef __gid_t gid_t;

typedef __mode_t mode_t;

typedef __nlink_t nlink_t;

typedef __uid_t uid_t;

typedef __off_t off_t;

typedef __pid_t pid_t;

typedef __id_t id_t;

typedef __ssize_t ssize_t;

typedef __daddr_t daddr_t;

typedef __caddr_t caddr_t;

typedef __key_t key_t;

typedef __clock_t clock_t;

typedef __clockid_t clockid_t;

typedef __time_t time_t;

typedef __timer_t timer_t;

typedef unsigned long ulong;

typedef unsigned short ushort;

typedef unsigned int uint;

typedef __int8_t int8_t;

typedef __int16_t int16_t;

typedef __int32_t int32_t;

typedef __int64_t int64_t;

typedef __uint8_t u_int8_t;

typedef __uint16_t u_int16_t;

typedef __uint32_t u_int32_t;

typedef __uint64_t u_int64_t;

typedef int register_t __attribute__((mode(__word__)));

typedef struct {
    unsigned long __val[16];
} __sigset_t;

typedef __sigset_t sigset_t;

struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};

struct timespec {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
};

typedef __suseconds_t suseconds_t;

typedef long __fd_mask;

typedef struct {
    __fd_mask __fds_bits[16];
} fd_set;

typedef __fd_mask fd_mask;

typedef __blksize_t blksize_t;

typedef __blkcnt_t blkcnt_t;

typedef __fsblkcnt_t fsblkcnt_t;

typedef __fsfilcnt_t fsfilcnt_t;

typedef union {
    unsigned long long __value64;
    struct {
        unsigned int __low;
        unsigned int __high;
    } __value32;
} __atomic_wide_counter;

struct __pthread_internal_list {
    struct __pthread_internal_list *__prev;
    struct __pthread_internal_list *__next;
};

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_slist {
    struct __pthread_internal_slist *__next;
};

typedef struct __pthread_internal_slist __pthread_slist_t;

struct __pthread_mutex_s {
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    __pthread_list_t __list;
};

struct __pthread_rwlock_arch_t {
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    signed char __rwelision;
    unsigned char __pad1[7];
    unsigned long __pad2;
    unsigned int __flags;
};

struct __pthread_cond_s {
    __atomic_wide_counter __wseq;
    __atomic_wide_counter __g1_start;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;

typedef unsigned long __thrd_t;

typedef struct {
    int __data;
} __once_flag;

typedef unsigned long pthread_t;

typedef union {
    char __size[4];
    int __align;
} pthread_mutexattr_t;

typedef union {
    char __size[4];
    int __align;
} pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef union pthread_attr_t pthread_attr_t;

typedef union {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
} pthread_mutex_t;

typedef union {
    struct __pthread_cond_s __data;
    char __size[48];
    long long __align;
} pthread_cond_t;

typedef union {
    struct __pthread_rwlock_arch_t __data;
    char __size[56];
    long __align;
} pthread_rwlock_t;

typedef union {
    char __size[8];
    long __align;
} pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union {
    char __size[32];
    long __align;
} pthread_barrier_t;

typedef union {
    char __size[4];
    int __align;
} pthread_barrierattr_t;

struct random_data {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
};

struct drand48_data {
    unsigned short __x[3];
    unsigned short __old_x[3];
    unsigned short __c;
    unsigned short __init;
    unsigned long long __a;
};

typedef int (*__compar_fn_t)(const void *, const void *);

typedef __builtin_va_list va_list;

typedef __builtin_va_list __gnuc_va_list;

typedef struct {
    int __count;
    union {
        unsigned int __wch;
        char __wchb[4];
    } __value;
} __mbstate_t;

struct _G_fpos_t {
    __off_t __pos;
    __mbstate_t __state;
};

typedef struct _G_fpos_t __fpos_t;

struct _G_fpos64_t {
    __off64_t __pos;
    __mbstate_t __state;
};

typedef struct _G_fpos64_t __fpos64_t;

struct _IO_FILE;

typedef struct _IO_FILE __FILE;

struct _IO_FILE;

typedef struct _IO_FILE FILE;

struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

typedef void _IO_lock_t;

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    struct _IO_codecvt *_codecvt;
    struct _IO_wide_data *_wide_data;
    struct _IO_FILE *_freeres_list;
    void *_freeres_buf;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

typedef __gnuc_va_list va_list;

typedef __fpos_t fpos_t;

struct __locale_struct {
    struct __locale_data *__locales[13];
    const unsigned short *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
};

typedef struct __locale_struct *__locale_t;

typedef __locale_t locale_t;

typedef __useconds_t useconds_t;

typedef __intptr_t intptr_t;

typedef __socklen_t socklen_t;

typedef unsigned char cc_t;

typedef unsigned int speed_t;

typedef unsigned int tcflag_t;

struct termios {
    tcflag_t c_iflag;
    tcflag_t c_oflag;
    tcflag_t c_cflag;
    tcflag_t c_lflag;
    cc_t c_line;
    cc_t c_cc[32];
    speed_t c_ispeed;
    speed_t c_ospeed;
};

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

enum __itimer_which {
    ITIMER_REAL = 0,
    ITIMER_VIRTUAL = 1,
    ITIMER_PROF = 2
};

struct itimerval {
    struct timeval it_interval;
    struct timeval it_value;
};

typedef int __itimer_which_t;

struct stat {
    __dev_t st_dev;
    __ino_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __syscall_slong_t __glibc_reserved[3];
};

typedef long ptrdiff_t;

typedef struct {
    long long __clang_max_align_nonce1 __attribute__((aligned(__alignof(long long))));
    long double __clang_max_align_nonce2 __attribute__((aligned(__alignof(long double))));
} max_align_t;

typedef size_t z_size_t;

typedef unsigned char Byte;

typedef unsigned int uInt;

typedef unsigned long uLong;

typedef Byte Bytef;

typedef char charf;

typedef int intf;

typedef uInt uIntf;

typedef uLong uLongf;

typedef const void *voidpc;

typedef void *voidpf;

typedef void *voidp;

typedef unsigned int z_crc_t;

typedef voidpf (*alloc_func)(voidpf, uInt, uInt);

typedef void (*free_func)(voidpf, voidpf);

struct internal_state;

struct z_stream_s {
    Bytef *next_in;
    uInt avail_in;
    uLong total_in;
    Bytef *next_out;
    uInt avail_out;
    uLong total_out;
    char *msg;
    struct internal_state *state;
    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;
    int data_type;
    uLong adler;
    uLong reserved;
};

typedef struct z_stream_s z_stream;

typedef z_stream *z_streamp;

struct gz_header_s {
    int text;
    uLong time;
    int xflags;
    int os;
    Bytef *extra;
    uInt extra_len;
    uInt extra_max;
    Bytef *name;
    uInt name_max;
    Bytef *comment;
    uInt comm_max;
    int hcrc;
    int done;
};

typedef struct gz_header_s gz_header;

typedef gz_header *gz_headerp;

typedef unsigned int (*in_func)(void *, unsigned char **);

typedef int (*out_func)(void *, unsigned char *, unsigned int);

struct gzFile_s;

typedef struct gzFile_s *gzFile;

struct gzFile_s {
    unsigned int have;
    unsigned char *next;
    off_t pos;
};

struct _BCoptions {
    unsigned char remove;
    unsigned char standardout;
    unsigned char compression;
    unsigned char type;
    uLong origsize;
    unsigned char securedelete;
};

typedef struct _BCoptions BCoptions;

typedef unsigned int uInt32;

typedef struct {
    uInt32 P[18];
    uInt32 S[4][256];
} BLOWFISH_CTX;


extern "C" int getremain_rwfile_c(uLong sz, int dv);
static int getremain(uLong sz, int dv) {
return getremain_rwfile_c(sz, dv);
}
extern "C" uLong padInput_rwfile_c(char **input, uLong sz);
static uLong padInput(char **input, uLong sz) {
return padInput_rwfile_c(input, sz);
}
extern "C" uLong attachKey_rwfile_c(char **input, char *key, uLong sz);
static uLong attachKey(char **input, char *key, uLong sz) {
return attachKey_rwfile_c(input, key, sz);
}
extern "C" uLong readfile_rwfile_c(char *infile, char **input, int type, char *key, struct stat statbuf);
static uLong readfile(char *infile, char **input, int type, char *key, struct stat statbuf) {
return readfile_rwfile_c(infile, input, type, key, statbuf);
}
extern "C" uLong writefile_rwfile_c(char *outfile, char *output, uLong sz, BCoptions options, struct stat statbuf);
static uLong writefile(char *outfile, char *output, uLong sz, BCoptions options, struct stat statbuf) {
return writefile_rwfile_c(outfile, output, sz, options, statbuf);
}
extern "C" int deletefile_rwfile_c(char *file, BCoptions options, char *key, struct stat statbuf);
static int deletefile(char *file, BCoptions options, char *key, struct stat statbuf) {
return deletefile_rwfile_c(file, options, key, statbuf);
}

#ifdef wchar_t
#undef wchar_t
#endif

#undef typeid
#undef throw
#undef thread_local
#undef template
#undef static_cast
#undef requires
#undef public
#undef protected
#undef reflexpr
#undef operator
#undef noexcept
#undef new
#undef namespace
#undef mutable
#undef try
#undef private
#undef friend
#undef virtual
#undef nullptr
#undef export
#undef this
#undef explicit
#undef typename
#undef delete
#undef decltype
#undef co_yield
#undef co_return
#undef co_await
#undef const_cast
#undef constinit
#undef consteval
#undef class
#undef synchronized
#undef char32_t
#undef constexpr
#undef char8_t
#undef catch
#undef using
#undef char16_t
#undef atomic_noexcept
#undef concept
#undef atomic_commit
#undef static_assert
#undef atomic_cancel
#undef dynamic_cast
#undef asm
#undef reinterpret_cast
#undef alignof
#undef alignas

}
#include <cstring>
#include <unistd.h>
#include <stdio.h>

void utbot_redirect_stdin(const char* buf, int &res) {
    int fds[2];
    if (pipe(fds) == -1) {
        res = -1;
        return;
    }
    close(STDIN_FILENO);
    dup2(fds[0], STDIN_FILENO);
    write(fds[1], buf, 64);
    close(fds[1]);
}

void write_to_file(const char *fileName, const char *buf) {
    FILE *out = fopen(fileName, "w");
    if (out == NULL) {
        return;
    }
    fwrite(buf, 1, 64, out);
    fclose(out);
}

template<typename T, size_t N>
T from_bytes(const char (&bytes)[N]) {
    T result;
    std::memcpy(&result, bytes, sizeof(result));
    return result;
}

template<typename T>
T& constCast(const T &val) {
    return const_cast<T&>(val);
}
