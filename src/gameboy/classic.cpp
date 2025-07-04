#include "gameboy/classic.hpp"
#include "cpu/instructions.hpp"
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
        // Debug::DumpByteBuf(buf, count);
        return buf;
    }

    void Classic::Start()
    {
        // These functions should be part of the CPU class in all reality
        // {
        // auto fetch = [](State* state) {
        //     logger.Log(TRACE, "Fetching next byte");
        //     return GameBoy::MemReadByte(state->cpu.mRegs.PC);
        // };

        auto execute = [](State* state, CPU::Instruction* instruction) {
            // At the same time as execution the gameboy should also fetch the next instruction
            // I have no idea how to do that currently so here is a commented out fetch call
            // Also I know lambdas cant be called within eachother but its the thought that counts for now
            // byte nextOp = fetch(state);
            
            instruction->targetFunc(state, state->cpu.mRegs.PC, instruction->opcode);
        };
        // }

        assert(mCartridge != nullptr);

        // Start by overwriting part of the cartridge with the boot rom (possible dmg0)
        int status = mState->cpu.BurnBootRom(mCartridge);
        if (status > 0) {
            logger.Log(ERROR, "Issue burning boot rom\nExiting with status %i", status);
            exit(status);
        }

        // Perform execution cycle
        while (true) {
            byte nextOp = mState->memory.Fetch(mState->cpu.mRegs.PC + 1);
            logger.Log(TRACE, "Next op: %d", nextOp);
            exit(1);

            CPU::Instruction instruction = GameBoy::CPU::GetInstruction(nextOp);
            execute(mState, &instruction);
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
