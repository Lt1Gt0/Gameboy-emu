#include "cpu/cpu.hpp"
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
            byte nextOp = GameBoy::MemReadByte(this->mRegs.PC, );
            // Decode
            // Execute
    

            return 0;
        }
    }
}
