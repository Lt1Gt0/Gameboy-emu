#pragma once
#ifndef _GAMEBOY_MEMORY_HPP_
#define _GAMEBOY_MEMORY_HPP_

#include "utils/types.hpp"
#include <stddef.h>

namespace GameBoy
{
    constexpr int MEM_MAP_SIZE {0xFFFF};

    enum MEM_MAP_OFFSET {
        RomBank0_16k        = 0x0000,
        RomSwitchable_16k   = 0x4000,
        VideoRam_8k         = 0x8000,
        RomSwitchable_8k    = 0xA000,
        WRam0_4k            = 0xC000,
        WRam1_4k            = 0xD000,
        WRam_Echo           = 0xE000,
        SpriteAttrib        = 0xFE00,
        EmptyIO_1           = 0xFEA0,
        PortsIO             = 0xFF00,
        HRam                = 0xFF80,
        InterruptEnableReg  = 0xFFFF
    };

    struct Memory {
        public: 
            byte Fetch(size_t offset);
            void* base;

            void* Ref(word offset);

            void WriteByte(word offset, byte value);
            void WriteWord(word offset, word value);

            byte ReadByte(word offset);
            word ReadWord(word offset);
    };
}

#endif // _GAMEBOY_MEMORY_HPP_
