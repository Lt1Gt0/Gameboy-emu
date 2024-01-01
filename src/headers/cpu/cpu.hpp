#pragma once
#ifndef _GAMEBOY_CPU_HPP_
#define _GAMEBOY_CPU_HPP_

#include "cpu/registers.hpp"

namespace GameBoy
{
    namespace CPU
    {
        class CPU 
        {
            public:
                CPU();
                ~CPU();

                Registers mRegs;
                int ExecuteInstruction();

            private:
                int InitBootROM();
        };
    }
}
#endif // _GAMEBOY_CPU_HPP_
