#include "cpu/cpu.hpp"
#include <assert.h>
#include <string.h>
#include "utils/logger.hpp"
#include "utils/types.hpp"
// #include "gameboy/memory.hpp"

namespace GameBoy
{
    namespace CPU
    {
        CPU::CPU()
        {

        }

        CPU::~CPU()
        {

        }

        int InitBootROM()
        {
            return 0;
        }

        int CPU::ExecuteInstruction()
        {
            // Fetch
            // byte nextOp = GameBoy::MemReadByte(this->mRegs.PC, );
            // Decode
            // Execute
    

            return 0;
        }

        int CPU::BurnBootRom(Cartridge::Cartridge* cartridge, const char* path)
        {
            assert(cartridge != nullptr);

            // Create buffer for boot rom
            size_t bootRomSize = 0xFF;
            byte* bootRomBuf = new byte[bootRomSize];
            memset(bootRomBuf, 0, bootRomSize);

            // Read Boot rom file into memory
            FILE* fp = fopen(path, "rb");
            fread(bootRomBuf, 1, bootRomSize, fp);
            fclose(fp);
            logger.Log(INFO, "Loaded boot rom buffer");

            // Use boot rom data and overwrite the cartridge from 0x00 -> 0xFF with boot rom
            memcpy(bootRomBuf, cartridge->mContents, bootRomSize);
            cartridge->DumpContents();

            return 0;
        }
    }
}
