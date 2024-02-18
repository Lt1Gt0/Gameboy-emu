#pragma once
#ifndef _GAMEBOY_CPU_HPP_
#define _GAMEBOY_CPU_HPP_

#include "cpu/registers.hpp"
#include "cartridge/cartridge.hpp"

namespace GameBoy
{
    namespace CPU
    {
        class CPU 
        {
            public:
                CPU();
                ~CPU();

                Registers mRegs;
                int BurnBootRom(Cartridge::Cartridge* cartridge, const char* path = "roms/boot/dmg.bin");

            private:
                int InitBootROM();
        };
    }
}

#endif // _GAMEBOY_CPU_HPP_
