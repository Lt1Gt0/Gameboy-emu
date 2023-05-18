#pragma once
#ifndef _REGISTERS_HPP_
#define _REGISTERS_HPP_

#include "utils/types.hpp"

namespace GameBoy
{
    struct Flags {
        public:
            byte Z : 1;
            byte N : 1;
            byte H : 1;
            byte C : 1;
            byte PAD : 4;

            void ParseAF(word AF);
    };

    struct Registers {
        union {
            word AF;
            
            struct {
                byte B;
                byte C;
                byte D;
                byte E;
                byte H;
                byte L;
            };

            struct {
                word BC;
                word DE;
                word HL;
            };

            word SP;
            word PC;
        };
    };
}

#endif // _REGISTERS_HPP_
