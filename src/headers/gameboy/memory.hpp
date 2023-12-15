#pragma once
#ifndef _GAMEBOY_MEMORY_HPP_
#define _GAMEBOY_MEMORY_HPP_

#include "utils/types.hpp"
#include "gameboy/definitions.hpp"
#include <array>

namespace GameBoy
{
    struct Memory {
        std::array<byte, MEM_MAP_SIZE> mMap;
    };

    void MemWriteByte(byte b, int offset, Memory* mem);
    void MemWriteWord(word b, int offset, Memory* mem);

    byte MemReadByte(int offset, Memory* mem);
    word MemReadWord(int offset, Memory* mem);
}

#endif // _GAMEBOY_MEMORY_HPP_
