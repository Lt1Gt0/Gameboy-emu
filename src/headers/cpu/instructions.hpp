#pragma once
#ifndef _GAMEBOY_CPU_INSTRUCTIONS_HPP_
#define _GAMEBOY_CPU_INSTRUCTIONS_HPP_

#include "utils/types.hpp"
#include "cpu/cpu.hpp"
#include <map>

#define UNUSED __attribute__((unused))

namespace GameBoy
{
    namespace CPU
    {
        typedef int (*OP)(CPU* state, UNUSED word basePC, byte opcode);
        struct Instruction {
            OP   targetFunc;
            byte clockCycles;
        };

        std::map<byte, Instruction> GetInstructionMap();
        int op_byte_ld(CPU* state, UNUSED word basePC, byte opcode);
        int op_word_ld(CPU* state, UNUSED word basePC, byte opcode);
        int op_byte_alu(CPU* state, UNUSED word basePC, byte opcode);
        int op_word_alu(CPU* state, UNUSED word basePC, byte opcode);
        int op_misc(CPU* state, UNUSED word basePC, byte opcode);

        // srb -> shift/rotate/bit ops
        int op_byte_srb(CPU* state, UNUSED word basePC, byte opcode);

    }
}

#endif // _GAMEBOY_CPU_INSTRUCTIONS_HPP_
