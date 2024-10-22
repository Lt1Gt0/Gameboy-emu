#pragma once
#ifndef _CARTRIDGE_HPP_
#define _CARTRIDGE_HPP_

#include "utils/types.hpp"
#include <string_view>

namespace GameBoy
{
    namespace Cartridge
    {
        enum TYPE {
            ROM_ONLY,
            MBC1,
            MBC2,
            MBC5,
            RUMBLE,
            HUC1
        };

        enum MBC1_MEM_MODE {

        };

        constexpr size_t CARTIDGE_MAX_SIZE {0x200000};
        constexpr word CARTIDGE_HEADER_GRAPHIC_OFFSET {0x0104};

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

            private:
                int InitHeader();
        };
    }
}

#endif // _CARTRIDGE_HPP_
