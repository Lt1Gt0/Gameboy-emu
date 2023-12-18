#pragma once
#ifndef _GAMEBOY_CPU_INSTRUCTIONS_HPP_
#define _GAMEBOY_CPU_INSTRUCTIONS_HPP_

#include "utils/types.hpp"
#include "cpu/cpu.hpp"

#define UNUSED __attribute__((unused))

namespace GameBoy
{
    namespace CPU
    {
        // typedef int (*OP)(CPU* state, UNUSED word basePC, byte opcode);
        // struct Instruction {
        //     OP   targetFunc;
        //     byte cycles;
        // };
        //
        int byte_ld(CPU* state, UNUSED word basePC, byte opcode);
        int word_ld(CPU* state, UNUSED word basePC, byte opcode);
        int byte_alu(CPU* state, UNUSED word basePC, byte opcode);
        int word_alu(CPU* state, UNUSED word basePC, byte opcode);

        // inline Instruction instructionLookup[0x200] = {
        //     [0x06] = {byte_ld, 8}
        // };
    }
}

#endif // _GAMEBOY_CPU_INSTRUCTIONS_HPP_
