#pragma once
#ifndef _GAMEBOY_CPU_INSTRUCTIONS_HPP_
#define _GAMEBOY_CPU_INSTRUCTIONS_HPP_

#include "utils/types.hpp"
#include "gameboy/state.hpp"
#include <map>

#define UNUSED __attribute__((unused))

namespace GameBoy
{
    namespace CPU
    {
        typedef int (*OP)(State* state, UNUSED word basePC, byte opcode);
        struct Instruction {
            OP   targetFunc;
            byte size;
            byte clockCycles;
        };

        std::map<byte, Instruction> GetInstructionMap();
        Instruction GetInstruction(byte opcode);
        int op_byte_ld(State* state, UNUSED word basePC, byte opcode);
        int op_word_ld(State* state, UNUSED word basePC, byte opcode);
        int op_byte_alu(State* state, UNUSED word basePC, byte opcode);
        int op_word_alu(State* state, UNUSED word basePC, byte opcode);
        int op_jmp(State* state, UNUSED word basePC, byte opcode);
        int op_misc(State* state, UNUSED word basePC, byte opcode);

        // srb -> shift/rotate/bit ops
        int op_byte_srb(State* state, UNUSED word basePC, byte opcode);
    }
}

#endif // _GAMEBOY_CPU_INSTRUCTIONS_HPP_
