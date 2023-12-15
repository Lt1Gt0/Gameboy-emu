#include "gameboy/memory.hpp"
#include "gameboy/definitions.hpp"
#include "utils/common.hpp"

namespace GameBoy
{
    void MemWriteByte(byte b, int offset, Memory* mem)
    {
        if (offset > GameBoy::MEM_MAP_SIZE)
            error(Severity::high, "Mem Write:", "Attempting to write mem out of bounds");

        mem->mMap[offset] = b;
    }

    void MemWriteWord(word w, int offset, Memory* mem)
    {
        if (offset > GameBoy::MEM_MAP_SIZE)
            error(Severity::high, "Mem Write:", "Attempting to write mem out of bounds");

        mem->mMap[offset] = (w >> 8 & 0xF);
        mem->mMap[offset + 1] = (w & 0x0F);

        // If for some reason I was wrong about the order in which words
        // should be written into RAM this will flip the order
        
        // mem->mMap[offset] = (w & 0x0F);
        // mem->mMap[offset + 1] = (w >> 8 & 0xF);
    }

    byte MemReadByte(int offset, Memory* mem)
    {
        if (offset > GameBoy::MEM_MAP_SIZE)
            error(Severity::high, "Mem Read:", "Attempting to read mem out of bounds");

        return mem->mMap[offset];
    }
    
    word MemReadWord(int offset, Memory* mem)
    {
        if (offset > GameBoy::MEM_MAP_SIZE)
            error(Severity::high, "Mem Read:", "Attempting to read mem out of bounds");

        word val = 0;

        word upper = mem->mMap[offset];
        upper <<= 8;

        val |= upper;
        val |= mem->mMap[offset + 1];

        return val;
    }
}
