#pragma once
#ifndef _COMMON_HPP_
#define _COMMON_HPP_

#include <stdarg.h>
#include <stdio.h>
#include <iostream>
#include "logger.hpp"
#include "utils/types.hpp"

// If a argument is optional this can be appended in the argument list
// for the function definition to declare it as optional
#define OPT [[maybe_unused]]

enum class Severity {
    low = 0,
    medium,
    high
};

inline void error(Severity severity)
{
    logger.Log(ERROR, "Exiting with severity: %d", (int)severity);
    std::cerr << '\n';
    std::exit((int)severity);
}

template<typename T, typename... Ts>
inline constexpr void error(Severity severity, T head, Ts... tail)
{
    std::cerr << head << " ";
    error(severity, tail...);
}

namespace Debug
{
    inline void Print(const char* fmt, ...)
    {
        va_list ap;
        va_start(ap, fmt);
        vfprintf(stdout, fmt, ap);
        fprintf(stdout, "\n");
        fflush(stdout);
        va_end(ap);
    }
    
    inline void PrintErr(const char* fmt, ...)
    {
        va_list ap;
        va_start(ap, fmt);
        vfprintf(stderr, fmt, ap);
        fprintf(stderr, "\n");
        fflush(stderr);
        va_end(ap);
    }

    inline void DumpByteBuf(byte* buf, size_t bufSize)
    {
        int count = 1;
        for (size_t i = 0; i <= bufSize; i++, count++) {
            printf("%02X", buf[i]);

            if (count % 2 == 0)
                printf(" ");

            if (count % 8 == 0) {
                printf("\n");
                count = 0;
            }
        }
    }
}

#endif // _COMMON_HPP_
