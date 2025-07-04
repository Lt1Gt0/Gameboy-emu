#include "cpu/cpu.hpp"
#include <assert.h>
#include <string.h>
#include "utils/logger.hpp"
#include "utils/types.hpp"

namespace GameBoy
{
    namespace CPU
    {
        CPU::CPU()
        {
            InitBootROM();
        }

        CPU::~CPU()
        {

        }

        int CPU::InitBootROM()
        {
            return 0;
        }

        int CPU::BurnBootRom(Cartridge::Cartridge* cartridge, const char* path)
        {
            assert(cartridge != nullptr);

            // Create buffer for boot rom
            size_t bootRomSize = 0xFF + 1;
            byte* bootRomBuf = new byte[bootRomSize];
            memset(bootRomBuf, 0, bootRomSize);

            // FIXME: Should be using istream instead of raw file pointer
            // Read Boot rom file into memory
            FILE* fp = fopen(path, "rb");
            
            if (fp == nullptr) {
                return -1;
            }

            fread(bootRomBuf, 1, bootRomSize, fp);
            fclose(fp);

            // Use boot rom data and overwrite the cartridge from 0x00 -> 0xFF with boot rom
            memcpy(cartridge->mContents, bootRomBuf, bootRomSize);

            if (cartridge->mContents == nullptr) {
                return -1;
            }

            logger.Log(INFO, "Loaded boot rom buffer");
            return 0;
        }
    }
}
