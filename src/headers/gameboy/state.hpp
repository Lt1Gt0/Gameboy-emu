#pragma once
#ifndef _GAMEBOY_STATE_HPP_
#define _GAMEBOY_STATE_HPP_

#include "cpu/cpu.hpp"
#include "gameboy/memory.hpp"

namespace GameBoy
{
    struct State {
        CPU::CPU cpu;
        Memory memory;
    };
}

#endif // _GAMEBOY_STATE_HPP_
