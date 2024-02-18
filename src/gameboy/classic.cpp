#include "gameboy/classic.hpp"
#include "utils/logger.hpp"
#include "utils/common.hpp"

#include <assert.h>
#include <string.h>

namespace GameBoy
{
    Classic::Classic()
    {
        mCartridge = nullptr;

        CPU::CPU cpu;
        Memory mem;
        mState = new State{cpu, mem};

        InitMemMap();
    }

    Classic::~Classic()
    {

    }

    void Classic::LoadCartridge(Cartridge::Cartridge* const cartridge)
    {
        assert(cartridge != nullptr);
        mCartridge = cartridge;
    }

    byte* Classic::ReadCartridge(int offset, int count)
    {
        byte* buf = mCartridge->Read(offset, count);
        assert(buf != nullptr);

        // REMOVE LATER
        Debug::DumpByteBuf(buf, count);
        return buf;
    }

    void Classic::Start()
    {
        assert(mCartridge != nullptr);

        // Start by overwriting part of the cartridge with the boot rom (possible dmg0)
        mState->cpu.BurnBootRom(mCartridge);


        // Set the new start state of the PC to 0x100
        // (Not sure if this is true)
        // mCPU.mRegs.PC = 0x100;

        // Perform execution cycle
        while (true) {
            mState->cpu.ExecuteInstruction();
        }
    }

    void Classic::InitMemMap()
    {
        mState->memory.base = new byte[MEM_MAP_SIZE];
        memset(mState->memory.base, 0, MEM_MAP_SIZE);
    }

    // FIXME
    void Classic::DumpMemMap(int offset, int amount)
    {
        if (amount + offset > (int)MEM_MAP_SIZE) {
            logger.Log(ERROR, "Unable to dump %d bytes starting from offset %d", amount, offset);
            return;
        }
        
        byte* buf = (static_cast<byte*>(mState->memory.base)) + offset;
        Debug::DumpByteBuf(buf, amount);
    }
}
