#pragma once
#ifndef _COMMON_H
#define _COMMON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <iostream>
#include "logger.h"
#define OPT [[maybe_unused]]

namespace C8
{
    typedef uint8_t     byte;
    typedef uint16_t    word;

    struct CallbackArgs {
        [[maybe_unused]] word addr;
        [[maybe_unused]] byte nibble;
        [[maybe_unused]] byte x;
        [[maybe_unused]] byte y;
        [[maybe_unused]] byte kk;
    };

    typedef void (*InstructionCallback)([[maybe_unused]] CallbackArgs arg);
}

enum class Severity {
    low = 0,
    medium,
    high
};

inline void error(Severity severity)
{
    LOG_ERROR << "Exiting with severity: " << (int)severity << std::endl;
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
}

#endif // _COMMON_H
