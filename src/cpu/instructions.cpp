#include "cpu/instructions.hpp"
#include <map>

#pragma GCC diagnostic ignored "-Wunused-parameter"

namespace GameBoy
{
    namespace CPU
    {
        int op_byte_ld(CPU* state, UNUSED word basePC, byte opcode)
        {
            switch (opcode) {
                case 0x06:
                {
                    break;
                }
                case 0x0E:
                {
                    break;
                }
                case 0x16:
                {
                    break;
                }
                case 0x1E:
                {
                    break;
                }
                case 0x26:
                {
                    break;
                }
                case 0x2E:
                {
                    break;
                }
                case 0x7F:
                {
                    break;
                }
                case 0x78:
                {
                    break;
                }
                case 0x79:
                {
                    break;
                }
                case 0x7A:
                {
                    break;
                }
                case 0x7B:
                {
                    break;
                }
                case 0x7C:
                {
                    break;
                }
                case 0x7D:
                {
                    break;
                }
                case 0x7E:
                {
                    break;
                }
                case 0x40:
                {
                    break;
                }
                case 0x41:
                {
                    break;
                }
                case 0x42:
                {
                    break;
                }
                case 0x43:
                {
                    break;
                }
                case 0x44:
                {
                    break;
                }
                case 0x45:
                {
                    break;
                }
                case 0x46:
                {
                    break;
                }
                case 0x47:
                {
                    break;
                }
                case 0x48:
                {
                    break;
                }
                case 0x49:
                {
                    break;
                }
                case 0x4A:
                {
                    break;
                }
                case 0x4B:
                {
                    break;
                }
                case 0x4C:
                {
                    break;
                }
                case 0x4D:
                {
                    break;
                }
                case 0x4E:
                {
                    break;
                }
                case 0x50:
                {
                    break;
                }
                case 0x51:
                {
                    break;
                }
                case 0x52:
                {
                    break;
                }
                case 0x53:
                {
                    break;
                }
                case 0x54:
                {
                    break;
                }
                case 0x55:
                {
                    break;
                }
                case 0x56:
                {
                    break;
                }
                case 0x57:
                {
                    break;
                }
                case 0x58:
                {
                    break;
                }
                case 0x59:
                {
                    break;
                }
                case 0x5A:
                {
                    break;
                }
                case 0x5B:
                {
                    break;
                }
                case 0x5C:
                {
                    break;
                }
                case 0x5D:
                {
                    break;
                }
                case 0x5E:
                {
                    break;
                }
                case 0x5F:
                {
                    break;
                }
                case 0x60:
                {
                    break;
                }
                case 0x61:
                {
                    break;
                }
                case 0x62:
                {
                    break;
                }
                case 0x63:
                {
                    break;
                }
                case 0x64:
                {
                    break;
                }
                case 0x65:
                {
                    break;
                }
                case 0x66:
                {
                    break;
                }
                case 0x67:
                {
                    break;
                }
                case 0x68:
                {
                    break;
                }
                case 0x69:
                {
                    break;
                }
                case 0x6A:
                {
                    break;
                }
                case 0x6B:
                {
                    break;
                }
                case 0x6C:
                {
                    break;
                }
                case 0x6D:
                {
                    break;
                }
                case 0x6E:
                {
                    break;
                }
                case 0x70:
                {
                    break;
                }
                case 0x71:
                {
                    break;
                }
                case 0x72:
                {
                    break;
                }
                case 0x73:
                {
                    break;
                }
                case 0x74:
                {
                    break;
                }
                case 0x75:
                {
                    break;
                }
                case 0x36:
                {
                    break;
                }
            }

            return 0;
        }

        int op_word_ld(CPU* state, UNUSED word basePC, byte opcode)
        {
            return 0;
        }

        int op_byte_alu(CPU* state, UNUSED word basePC, byte opcode)
        {
            return 0;
        }

        int op_word_alu(CPU* state, UNUSED word basePC, byte opcode)
        {
            return 0;
        }

        int op_misc(CPU* state, UNUSED word basePC, byte opcode)
        {

        }

        std::map<byte, Instruction> GetInstructionMap()
        {
            std::map<byte, Instruction> instructionMap {
                {0x0, {op_misc, 4}}
            };

            return instructionMap;
        }
    }
}

#pragma GCC diagnostic error "-Wunused-parameter"
