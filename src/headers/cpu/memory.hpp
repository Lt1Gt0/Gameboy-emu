#pragma once
#ifndef _GAMEBOY_CPU_MEMORY_H
#define _GAMEBOY_CPU_MEMORY_H

#include "gameboy/memory.hpp"
#include "utils/types.hpp"

namespace GameBoy
{
    namespace CPU
    {
        void MemWriteByte(byte b, int offset, Memory* mem);
        void MemWriteWord(word b, int offset, Memory* mem);

        byte MemReadByte(int offset, Memory* mem);
        word MemReadWord(int offset, Memory* mem);
    }
}

#endif // _GAMEBOY_CPU_MEMORY_H
