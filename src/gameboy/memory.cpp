#include "gameboy/memory.hpp"
#include <stdint.h>

namespace GameBoy
{
    byte Memory::Fetch(size_t offset)
    {
        return ReadByte(offset);
    }

    void* Memory::Ref(word offset)
    {
        return (void*)((uintptr_t)this->base | offset);
    }

    byte Memory::ReadByte(word offset)
    {
        return *(byte*)Ref(offset);
    }

    word Memory::ReadWord(word offset)
    {
        return *(word*)Ref(offset);
    }

    void Memory::WriteByte(word offset, byte value)
    {
        byte* target = (byte*)Ref(offset);
        *target = value;
    }

    void Memory::WriteWord(word offset, word value)
    {
        word* target = (word*)Ref(offset);
        *target = value;
    }
}
