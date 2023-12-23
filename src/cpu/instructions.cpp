#include "cpu/instructions.hpp"
#include "utils/common.hpp"
#include "utils/logger.hpp"
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
                default:
                {
                    logger.Log(ERROR, "Unknown misc operation");
                }
            }

            return 0;
        }

        int op_word_ld(CPU* state, UNUSED word basePC, byte opcode)
        {
            switch(opcode) {
                default:
                {
                    logger.Log(ERROR, "Unknown misc operation");
                }
            }

            return 0;
        }

        int op_byte_alu(CPU* state, UNUSED word basePC, byte opcode)
        {
            switch(opcode) {
                default:
                {
                    logger.Log(ERROR, "Unknown misc operation");
                }
            }

            return 0;
        }

        int op_word_alu(CPU* state, UNUSED word basePC, byte opcode)
        {
            switch(opcode) {
                default:
                {
                    logger.Log(ERROR, "Unknown misc operation");
                }
            }

            return 0;
        }

        int op_jmp(CPU* state, UNUSED word basePC, byte opcode)
        {
            switch(opcode) {
                default:
                {
                    logger.Log(ERROR, "Unknown misc operation");
                }
            }

            return 0;
        }

        int op_misc(CPU* state, UNUSED word basePC, byte opcode)
        {
            switch(opcode) {
                case 0x00: // NOP
                {

                }
                default:
                {
                    logger.Log(ERROR, "Unknown misc operation");
                }
            }

            return 0;
        }

        std::map<byte, Instruction> GetInstructionMap()
        {
            std::map<byte, Instruction> instructionMap {
                {0x0, {op_misc, 1, 4}},
                {0x1, {op_word_ld, 3, 12}},
                {0x2, {op_byte_ld, 1, 8}},
                {0x3, {op_word_alu, 1, 8}},
                {0x4, {op_byte_alu, 1, 4}},
                {0x5, {op_byte_alu, 1, 4}},
                {0x6, {op_byte_ld, 2, 8}},
                {0x7, {op_byte_srb, 1, 4}},
                {0x8, {op_word_ld, 3, 20}},
                {0x9, {op_word_alu, 1, 8}},
                {0xA, {op_byte_ld, 1, 8}},
                {0xB, {op_word_alu, 1, 8}},
                {0xC, {op_byte_alu, 1, 4}},
                {0xD, {op_byte_alu, 1, 4}},
                {0xE, {op_byte_ld, 2, 8}},
                {0xF, {op_byte_srb, 1, 4}},
                {0x10, {op_misc, 2, 4}},
                {0x11, {op_word_ld, 3, 12}},
                {0x12, {op_byte_ld, 1, 8}},
                {0x13, {op_word_alu, 1, 8}},
                {0x14, {op_byte_alu, 1, 4}},
                {0x15, {op_byte_alu, 1, 4}},
                {0x16, {op_byte_ld, 2, 8}},
                {0x17, {op_byte_srb, 1, 4}},
                {0x18, {op_jmp, 2, 12}},
                {0x19, {op_word_alu, 1, 8}},
                {0x1A, {op_byte_ld, 1, 8}},
                {0x1B, {op_word_alu, 1, 8}},
                {0x1C, {op_byte_alu, 1, 4}},
                {0x1D, {op_byte_alu, 1, 4}},
                {0x1E, {op_byte_ld, 2, 8}},
                {0x1F, {op_byte_srb, 1, 4}},
                {0x20, {op_jmp, 2, 8}}, // 12/8
                {0x21, {op_word_ld, 3, 12}},
                {0x22, {op_byte_ld, 1, 8}},
                {0x23, {op_word_alu, 1, 8}},
                {0x24, {op_byte_alu, 1, 4}},
                {0x25, {op_byte_alu, 1, 4}},
                {0x26, {op_byte_ld, 2, 8}},
                {0x27, {op_byte_alu, 1, 4}},
                {0x28, {op_jmp, 2, 8}}, // 12/8
                {0x29, {op_word_alu, 1, 8}},
                {0x2A, {op_byte_ld, 1, 8}},
                {0x2B, {op_word_alu, 1, 8}},
                {0x2C, {op_byte_alu, 1, 4}},
                {0x2D, {op_byte_alu, 1, 4}},
                {0x2E, {op_byte_ld, 2, 8}},
                {0x2F, {op_byte_alu, 1, 4}},
                {0x30, {op_jmp, 2, 8}}, // 12/8
                {0x31, {op_word_ld, 3, 12}},
                {0x32, {op_byte_ld, 1, 8}},
                {0x33, {op_word_alu, 1, 8}},
                {0x34, {op_byte_alu, 1, 12}},
                {0x35, {op_byte_alu, 1, 12}},
                {0x36, {op_byte_ld, 2, 12}},
                {0x37, {op_byte_ld, 1, 4}},
                {0x38, {op_jmp, 2, 8}}, // 12/ 8
                {0x39, {op_word_alu, 1, 8}},
                {0x3A, {op_byte_ld, 1, 8}},
                {0x3B, {op_word_alu, 1, 8}},
                {0x3C, {op_byte_alu, 1, 4}},
                {0x3D, {op_byte_alu, 1, 4}},
                {0x3E, {op_byte_ld, 2, 8}},
                {0x3F, {op_byte_ld, 1, 4}},
                {0x40, {op_byte_ld, 1, 4}},
                {0x41, {op_byte_ld, 1, 4}},
                {0x42, {op_byte_ld, 1, 4}},
                {0x43, {op_byte_ld, 1, 4}},
                {0x44, {op_byte_ld, 1, 4}},
                {0x45, {op_byte_ld, 1, 4}},
                {0x46, {op_byte_ld, 1, 8}},
                {0x47, {op_byte_ld, 1, 4}},
                {0x48, {op_byte_ld, 1, 4}},
                {0x49, {op_byte_ld, 1, 4}},
                {0x4A, {op_byte_ld, 1, 4}},
                {0x4B, {op_byte_ld, 1, 4}},
                {0x4C, {op_byte_ld, 1, 4}},
                {0x4D, {op_byte_ld, 1, 4}},
                {0x4E, {op_byte_ld, 1, 8}},
                {0x4F, {op_byte_ld, 1, 4}},
                {0x50, {op_byte_ld, 1, 4}},
                {0x51, {op_byte_ld, 1, 4}},
                {0x52, {op_byte_ld, 1, 4}},
                {0x53, {op_byte_ld, 1, 4}},
                {0x54, {op_byte_ld, 1, 4}},
                {0x55, {op_byte_ld, 1, 4}},
                {0x56, {op_byte_ld, 1, 8}},
                {0x57, {op_byte_ld, 1, 4}},
                {0x58, {op_byte_ld, 1, 4}},
                {0x59, {op_byte_ld, 1, 4}},
                {0x5A, {op_byte_ld, 1, 4}},
                {0x5B, {op_byte_ld, 1, 4}},
                {0x5C, {op_byte_ld, 1, 4}},
                {0x5D, {op_byte_ld, 1, 4}},
                {0x5E, {op_byte_ld, 1, 8}},
                {0x5F, {op_byte_ld, 1, 4}},
                {0x60, {op_byte_ld, 1, 4}},
                {0x61, {op_byte_ld, 1, 4}},
                {0x62, {op_byte_ld, 1, 4}},
                {0x63, {op_byte_ld, 1, 4}},
                {0x64, {op_byte_ld, 1, 4}},
                {0x65, {op_byte_ld, 1, 4}},
                {0x66, {op_byte_ld, 1, 8}},
                {0x67, {op_byte_ld, 1, 4}},
                {0x68, {op_byte_ld, 1, 4}},
                {0x69, {op_byte_ld, 1, 4}},
                {0x6A, {op_byte_ld, 1, 4}},
                {0x6B, {op_byte_ld, 1, 4}},
                {0x6C, {op_byte_ld, 1, 4}},
                {0x6D, {op_byte_ld, 1, 4}},
                {0x6E, {op_byte_ld, 1, 8}},
                {0x6F, {op_byte_ld, 1, 4}},
                {0x70, {op_byte_ld, 1, 8}},
                {0x71, {op_byte_ld, 1, 8}},
                {0x72, {op_byte_ld, 1, 8}},
                {0x73, {op_byte_ld, 1, 8}},
                {0x74, {op_byte_ld, 1, 8}},
                {0x75, {op_byte_ld, 1, 8}},
                {0x76, {op_byte_ld, 1, 8}},
                {0x77, {op_misc, 1, 4}},
                {0x78, {op_byte_ld, 1, 8}},
                {0x79, {op_byte_ld, 1, 4}},
                {0x7A, {op_byte_ld, 1, 4}},
                {0x7B, {op_byte_ld, 1, 4}},
                {0x7C, {op_byte_ld, 1, 4}},
                {0x7D, {op_byte_ld, 1, 4}},
                {0x7E, {op_byte_ld, 1, 8}},
                {0x7F, {op_byte_ld, 1, 4}},
                {0x80, {op_byte_alu,1, 4}},
                {0x81, {op_byte_alu,1, 4}},
                {0x82, {op_byte_alu,1, 4}},
                {0x83, {op_byte_alu,1, 4}},
                {0x84, {op_byte_alu,1, 4}},
                {0x85, {op_byte_alu,1, 4}},
                {0x86, {op_byte_alu,1, 8}},
                {0x87, {op_byte_alu,1, 4}},
                {0x88, {op_byte_alu,1, 4}},
                {0x89, {op_byte_alu,1, 4}},
                {0x8A, {op_byte_alu,1, 4}},
                {0x8B, {op_byte_alu,1, 4}},
                {0x8C, {op_byte_alu,1, 4}},
                {0x8D, {op_byte_alu,1, 4}},
                {0x8E, {op_byte_alu,1, 8}},
                {0x8F, {op_byte_alu,1, 4}},
                {0x90, {op_byte_alu,1, 4}},
                {0x91, {op_byte_alu,1, 4}},
                {0x92, {op_byte_alu,1, 4}},
                {0x93, {op_byte_alu,1, 4}},
                {0x94, {op_byte_alu,1, 4}},
                {0x95, {op_byte_alu,1, 4}},
                {0x96, {op_byte_alu,1, 8}},
                {0x97, {op_byte_alu,1, 4}},
                {0x98, {op_byte_alu,1, 4}},
                {0x99, {op_byte_alu,1, 4}},
                {0x9A, {op_byte_alu,1, 4}},
                {0x9B, {op_byte_alu,1, 4}},
                {0x9C, {op_byte_alu,1, 4}},
                {0x9D, {op_byte_alu,1, 4}},
                {0x9E, {op_byte_alu,1, 8}},
                {0x9F, {op_byte_alu,1, 4}},
                {0xA0, {op_byte_alu,1, 4}},
                {0xA1, {op_byte_alu,1, 4}},
                {0xA2, {op_byte_alu,1, 4}},
                {0xA3, {op_byte_alu,1, 4}},
                {0xA4, {op_byte_alu,1, 4}},
                {0xA5, {op_byte_alu,1, 4}},
                {0xA6, {op_byte_alu,1, 8}},
                {0xA7, {op_byte_alu,1, 4}},
                {0xA8, {op_byte_alu,1, 4}},
                {0xA9, {op_byte_alu,1, 4}},
                {0xAA, {op_byte_alu,1, 4}},
                {0xAB, {op_byte_alu,1, 4}},
                {0xAC, {op_byte_alu,1, 4}},
                {0xAD, {op_byte_alu,1, 4}},
                {0xAE, {op_byte_alu,1, 8}},
                {0xAF, {op_byte_alu,1, 4}},
                {0xB0, {op_byte_alu,1, 4}},
                {0xB1, {op_byte_alu,1, 4}},
                {0xB2, {op_byte_alu,1, 4}},
                {0xB3, {op_byte_alu,1, 4}},
                {0xB4, {op_byte_alu,1, 4}},
                {0xB5, {op_byte_alu,1, 4}},
                {0xB6, {op_byte_alu,1, 8}},
                {0xB7, {op_byte_alu,1, 4}},
                {0xB8, {op_byte_alu,1, 4}},
                {0xB9, {op_byte_alu,1, 4}},
                {0xBA, {op_byte_alu,1, 4}},
                {0xBB, {op_byte_alu,1, 4}},
                {0xBC, {op_byte_alu,1, 4}},
                {0xBD, {op_byte_alu,1, 4}},
                {0xBE, {op_byte_alu,1, 8}},
                {0xBF, {op_byte_alu,1, 4}},
                // {0xC0, {op_, }},
                // {0xC1, {op_, }},
                // {0xC2, {op_, }},
                // {0xC3, {op_, }},
                // {0xC4, {op_, }},
                // {0xC5, {op_, }},
                // {0xC6, {op_, }},
                // {0xC7, {op_, }},
                // {0xC8, {op_, }},
                // {0xC9, {op_, }},
                // {0xCA, {op_, }},
                // {0xCB, {op_, }},
                // {0xCC, {op_, }},
                // {0xCD, {op_, }},
                // {0xCE, {op_, }},
                // {0xCF, {op_, }},
                // {0xD0, {op_, }},
                // {0xD1, {op_, }},
                // {0xD2, {op_, }},
                // {0xD3, {op_, }},
                // {0xD4, {op_, }},
                // {0xD5, {op_, }},
                // {0xD6, {op_, }},
                // {0xD7, {op_, }},
                // {0xD8, {op_, }},
                // {0xD9, {op_, }},
                // {0xDA, {op_, }},
                // {0xDB, {op_, }},
                // {0xDC, {op_, }},
                // {0xDD, {op_, }},
                // {0xDE, {op_, }},
                // {0xDF, {op_, }},
                // {0xE0, {op_, }},
                // {0xE1, {op_, }},
                // {0xE2, {op_, }},
                // {0xE3, {op_, }},
                // {0xE4, {op_, }},
                // {0xE5, {op_, }},
                // {0xE6, {op_, }},
                // {0xE7, {op_, }},
                // {0xE8, {op_, }},
                // {0xE9, {op_, }},
                // {0xEA, {op_, }},
                // {0xEB, {op_, }},
                // {0xEC, {op_, }},
                // {0xED, {op_, }},
                // {0xEE, {op_, }},
                // {0xEF, {op_, }},
                // {0xF0, {op_, }},
                // {0xF1, {op_, }},
                // {0xF2, {op_, }},
                // {0xF3, {op_, }},
                // {0xF4, {op_, }},
                // {0xF5, {op_, }},
                // {0xF6, {op_, }},
                // {0xF7, {op_, }},
                // {0xF8, {op_, }},
                // {0xF9, {op_, }},
                // {0xFA, {op_, }},
                // {0xFB, {op_, }},
                // {0xFC, {op_, }},
                // {0xFD, {op_, }},
                // {0xFE, {op_, }},
                // {0xFF, {op_, }},
            };

            return instructionMap;
        }
    }
}

#pragma GCC diagnostic error "-Wunused-parameter"
