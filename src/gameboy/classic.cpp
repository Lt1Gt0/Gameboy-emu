#include "gameboy/classic.hpp"
#include "utils/logger.hpp"

#include <assert.h>
#include <string.h>

namespace GameBoy
{
    Classic::Classic()
    {
        mCartidge = nullptr;

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

        mCartidge = cartridge;
        logger.Log(INFO, "Loaded cartidge into gameboy");
    }

    void Classic::Start()
    {
        assert(mCartidge != nullptr);

        // Start by overwriting part of the cartridge with the boot rom (possible dmg0)
        mState->cpu.BurnBootRom(mCartidge);


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
        if (amount + offset > MEM_MAP_SIZE) {
            logger.Log(ERROR, "Unable to dump %d bytes starting from offset %d", amount, offset);
            return;
        }
        
        // int cursor = 0;
        // auto printByte = [&](const byte& b) -> void {   
        //     if (cursor >= 16) {
        //         fprintf(stdout, "\n");
        //         cursor = 0;
        //     }
        //
        //     if (cursor % 2 == 0)
        //         fprintf(stdout, " ");
        //
        //     fprintf(stdout, "%02X", b);
        //     cursor++;
        // };
        //
        // std::for_each_n(mMemory.mMap.begin(), amount, printByte);
        fprintf(stdout, "\n");
    }
}
