#pragma once
#ifndef _CARTRIDGE_HPP_
#define _CARTRIDGE_HPP_

#include "utils/types.hpp"
#include <string_view>

namespace GameBoy
{
    namespace Cartridge
    {
        // Scrolling Nintendo Graphic
        // location at address 0x68 -> 0x85 (0104 -> 0133)
        constexpr byte NINTENDO_GRAPHIC[48] = {
            0xCE, 0xED, 0x66, 0x66, 0xCC, 0x0D,
            0x00, 0x0B, 0x03, 0x73, 0x00, 0x83,
            0x00, 0x0C, 0x00, 0x0D, 0x00, 0x08,
            0x11, 0x1F, 0x88, 0x89, 0x00, 0x0E,
            0xDC, 0xCC, 0x6E, 0xE6, 0xDD, 0xDD,
            0xD9, 0x99, 0xBB, 0xBB, 0x67, 0x63,
            0x6E, 0x0E, 0xEC, 0xCC, 0xDD, 0xDC,
            0x99, 0x9F, 0xBB, 0xB9, 0x33, 0x3E
        };

        constexpr size_t CARTIDGE_MAX_SIZE {0x200000};

        class Cartridge
        {
            public:
                Cartridge(std::string_view path);
                ~Cartridge();

                int LoadContents(std::string_view path);
                byte* Read(int offset, int count);

                // DEBUG FUNCTIONS
                void DumpContents();
                byte* mContents;
        };
    }
}

#endif // _CARTRIDGE_HPP_
