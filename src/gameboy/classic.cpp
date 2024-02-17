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

        int count = 1;
        // byte test = 11;
        // ((byte*)(mState->memory.base))[0] = test;
        for (int i = 0; i < amount; i++, count++) {
            // printf("%02X", static_cast<byte*>(mState->memory.base)[i]);
            printf("%02X", static_cast<byte*>(mState->memory.base)[i]);

            if (count % 2 == 0)
                printf(" ");

            if (count % 8 == 0) {
                printf("\n");
                count = 0;
            }
        }

        // int count = 1;
        // for (size_t i = 0; i < sizeof(mMemoryMap); i++, count++) {
        //     printf("%02X", mMemoryMap[i]);
        //     
        //     if (count % 2 == 0) {
        //         printf(" ");
        //     }
        //
        //     if (count % 8 == 0) {
        //         printf("\n");
        //         count = 0;
        //     }
        // }

        // int* loc = (int*)&mState->memory.base + offset;
        // std::cerr << amount << "\n";
        // std::cerr << std::hex << (int)*loc << "\n";
        // std::cerr << loc + amount << "\n\n";
        // for (int cursor = 0; cursor < amount; cursor++) {
        //     if (cursor >= 16) {
        //         fprintf(stdout, "\n");
        //         cursor = 0;
        //     }
        //
        //     if (cursor % 2 == 0)
        //         fprintf(stdout, " ");
        //
        //     fprintf(stdout, "%02X", (char)*loc);
        //     loc += 1;
        //     std::cerr << loc << "\n";
        // }
        // // auto printByte = [&](const byte& b) -> void {   
        // //     if (cursor >= 16) {
        // //         fprintf(stdout, "\n");
        // //         cursor = 0;
        // //     }
        // //
        // //     if (cursor % 2 == 0)
        // //         fprintf(stdout, " ");
        // //
        // //     fprintf(stdout, "%02X", b);
        // //     cursor++;
        // // };
        // //
        // // std::for_each_n(mMemory.mMap.begin(), amount, printByte);
        // fprintf(stdout, "\n");
    }
}
