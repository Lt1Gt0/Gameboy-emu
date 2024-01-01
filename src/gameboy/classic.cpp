#include "gameboy/classic.hpp"
#include "utils/logger.hpp"

#include <assert.h>
#include <algorithm>

namespace GameBoy
{
    Classic::Classic()
    {
        InitMemMap();
        mCartidge = nullptr;
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

        // Gameboy specs state on start the PC is set to 0x100
        mCPU.mRegs.PC = 0x100;
        

        while (true) {
            mCPU.ExecuteInstruction();
        }
    }

    void Classic::InitMemMap()
    {
        mMemory.mMap.fill(0);
    }

    // TODO: Optimize later
    void Classic::DumpMemMap(int offset, int amount)
    {
        if (amount + offset > MEM_MAP_SIZE) {
            logger.Log(ERROR, "Unable to dump %d bytes starting from offset %d", amount, offset);
            return;
        }

        int cursor = 0;
        auto printByte = [&](const byte& b) -> void {   
            if (cursor >= 16) {
                fprintf(stdout, "\n");
                cursor = 0;
            }

            if (cursor % 2 == 0)
                fprintf(stdout, " ");

            fprintf(stdout, "%02X", b);
            cursor++;
        };

        std::for_each_n(mMemory.mMap.begin(), amount, printByte);
        fprintf(stdout, "\n");
    }
}
