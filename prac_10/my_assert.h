#ifndef MY_ASSERT_H
#define MY_ASSERT_H

#include <stdio.h>
#include <stdlib.h>

// 조건이 거짓이면 오류 정보를 출력하고 프로그램 종료
static inline void my_assert_fail(const char *expr,
                                  const char *file,
                                  int line,
                                  const char *func)
{
    fprintf(stderr, "%s:%d: %s: Assertion `%s' failed.\n",
            file, line, func, expr);
    abort();
}

// NDEBUG가 정의되면 조건 검사를 생략
#ifdef NDEBUG
#define my_assert(expr) ((void)0)
#else
#define my_assert(expr) \
    ((expr) ? (void)0 : my_assert_fail(#expr, __FILE__, __LINE__, __func__))
#endif

#endif
