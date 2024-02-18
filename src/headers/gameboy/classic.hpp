#pragma once
#ifndef _GAMEBOY_CLASSIC_HPP_
#define _GAMEBOY_CLASSIC_HPP_

#include "gameboy/state.hpp"
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

            State* mState;
            Cartridge::Cartridge* mCartridge;
        private:
            byte* ReadCartridge(int offset, int count);
            void InitMemMap();
    };
}

#endif // _GAMEBOY_CLASSIC_HPP_
