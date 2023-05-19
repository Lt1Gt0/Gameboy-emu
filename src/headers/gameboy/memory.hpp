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
}

#endif // _GAMEBOY_MEMORY_HPP_
