#ifndef __SYLAR_UTIL_H__
#define __SYLAR_UTIL_H__

#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <string>

namespace sylar {

pid_t GetThreadId();
uint32_t GetCoroutineId();

}

#endif