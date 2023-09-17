#pragma once
#ifndef _GAMEBOY_HPP_
#define _GAMEBOY_HPP_

#include "cpu/cpu.hpp"
#include "gameboy/memory.hpp"
#include "cartridge/cartridge.hpp"

namespace GameBoy
{
    class Classic
    {
        public:
            Classic();
            ~Classic();

            void LoadCartridge(Cartridge::Cartridge* const cartridge);

            void Start();
            void DumpMemMap(int offset = MEM_MAP_OFFSET::RomBank0_16k, int amount = MEM_MAP_SIZE);

            Memory mMemory;
        private:
            void InitMemMap();

            CPU::CPU mCPU;
    };
}

#endif // _GAMEBOY_HPP_
