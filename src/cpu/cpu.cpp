#include "cpu/cpu.hpp"
#include <assert.h>
#include "utils/common.hpp"
#include "gameboy/memory.hpp"

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

            // Read Boot rom file into memory

            // Use boot rom data and overwrite the cartridge from 0x00 -> 0xFF with boot rom

            return 0;
        }
    }
}
