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

            private:

        };
    }
}
#endif // _GAMEBOY_CPU_HPP_
