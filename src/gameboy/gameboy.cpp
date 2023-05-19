#include "gameboy/gameboy.hpp"
#include "utils/logger.hpp"

#include <algorithm>

namespace GameBoy
{
    GameBoy::GameBoy()
    {
        InitMemMap();
    }

    GameBoy::~GameBoy()
    {

    }

    void GameBoy::Start()
    {
        // Gameboy specs state on start the PC is set to 0x100
        mCPU.mRegs.PC = 0x100;
    }

    void GameBoy::InitMemMap()
    {
        mMemory.mMap.fill(0);
    }

    // TODO: Optimize later
    void GameBoy::DumpMemMap(int offset, int amount)
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
