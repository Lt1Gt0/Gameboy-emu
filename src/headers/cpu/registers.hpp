#pragma once
#ifndef _GAMEBOY_CPU_REGISTERS_HPP_
#define _GAMEBOY_CPU_REGISTERS_HPP_

#include "utils/types.hpp"

namespace GameBoy
{
    namespace CPU
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
            word AF;
            
            union {
                struct {
                    byte B;
                    byte C;
                };
                word BC;
            };

            union {
                struct {
                    byte D;
                    byte E;
                };
                word DE;
            };

            union {
                struct {
                    byte H;
                    byte L;
                };
                word HL;
            };

            word SP;
            word PC;
        };
    }
}

#endif // _GAMEBOY_CPU_REGISTERS_HPP_
