#include "gameboy/memory.hpp"
#include <stdint.h>

namespace GameBoy
{
    void* MemRef(Memory* mem, word offset)
    {
        return (void*)((uintptr_t)mem->base | offset);
    }

    byte MemReadByte(Memory* mem, word offset)
    {
        return *(byte*)MemRef(mem, offset);
    }

    word MemReadWord(Memory* mem, word offset)
    {
        return *(word*)MemRef(mem, offset);
    }

    void MemWriteByte(Memory* mem, word offset, byte value)
    {
        byte* target = (byte*)MemRef(mem, offset);
        *target = value;
    }

    void MemWriteWord(Memory* mem, word offset, word value)
    {
        word* target = (word*)MemRef(mem, offset);
        *target = value;
    }
}
