#ifndef VOLETA_LIBC_STDARG_H
#define VOLETA_LIBC_STDARG_H 1

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define __NEED_va_list

#define va_start(v,l)   __builtin_va_start(v,l)
#define va_end(v)       __builtin_va_end(v)
#define va_arg(v,l)     __builtin_va_arg(v,l)
#define va_copy(d,s)    __builtin_va_copy(d,s)

#ifdef __cplusplus
}
#endif

#endif //VOLETA_LIBC_STDARG_H
