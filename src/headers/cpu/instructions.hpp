#pragma once
#ifndef _GAMEBOY_CPU_INSTRUCTIONS_HPP_
#define _GAMEBOY_CPU_INSTRUCTIONS_HPP_

#include "utils/types.hpp"

namespace GameBoy
{
    namespace CPU
    {

        struct Instruction {
            word opcode;
            byte cycles;

        };
    }
}

#endif // _GAMEBOY_CPU_INSTRUCTIONS_HPP_
