#include "cpu/instructions.hpp"
// #include "gameboy/memory.hpp"
#include "utils/logger.hpp"
#include "utils/logger.hpp"
#include <map>

// Z -> Zero flag
// N -> Subtract flag
// H -> Carry flag
// 0 -> Flag is reset
// 1 -> Flag is set
// - -> Flag is left untouched 

#pragma GCC diagnostic ignored "-Wunused-parameter"

namespace GameBoy
{
    namespace CPU
    {
        int op_byte_ld(State* state, UNUSED word basePC, byte opcode)
        {
            switch (opcode) {
                case 0x02:
                {
                    break;
                }
                case 0x06:
                {
                    break;
                }
                case 0x0A:
                {
                    break;
                }
                case 0x0E:
                {
                    break;
                }
                case 0x12:
                {
                    break;
                }
                case 0x16:
                {
                    break;
                }
                case 0x1A:
                {
                    break;
                }
                case 0x1E:
                {
                    break;
                }
                case 0x22:
                {
                    break;
                }
                case 0x26:
                {
                    break;
                }
                case 0x2A:
                {
                    break;
                }
                case 0x2E:
                {
                    break;
                }
                case 0x32:
                {
                    break;
                }
                case 0x36:
                {
                    break;
                }
                case 0x3A:
                {
                    break;
                }
                case 0x3E:
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
                    // state->cpu.mRegs.AF
                    break;
                }
                case 0x7F:
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

        int op_word_ld(State* state, UNUSED word basePC, byte opcode)
        {
            state->cpu.mRegs.PC++;

            switch(opcode) {
                case 0x01:
                {
                    break;
                }
                case 0x08:
                {
                    break;
                }
                case 0x11:
                {
                    break;
                }
                case 0x21:
                {
                    break;
                }
                case 0x31:
                {
                    // state->mRegs.SP = MemReadWord()
                    break;
                }
                case 0xC1:
                {
                    break;
                }
                case 0xC5:
                {
                    break;
                }
                case 0xD1:
                {
                    break;
                }
                case 0xD5:
                {
                    break;
                }
                case 0xE1:
                {
                    break;
                }
                case 0xE5:
                {
                    break;
                }
                case 0xF1:
                {
                    break;
                }
                case 0xF5:
                {
                    break;
                }
                case 0xF8:
                {
                    break;
                }
                case 0xF9:
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

        int op_byte_alu(State* state, UNUSED word basePC, byte opcode)
        {
            switch(opcode) {
                case 0x04: // Z 0 H -
                {
                    break;
                }
                case 0x05: // Z 1 H -
                {
                    break;
                }
                case 0x0C: // Z 0 H -
                {
                    break;
                }
                case 0x0D: // Z 1 H -
                {
                    break;
                }
                case 0x14: // Z 0 H -
                {
                    break;
                }
                case 0x15: // Z 1 H -
                {
                    break;
                }
                case 0x1C: // Z 0 H -
                {
                    break;
                }
                case 0x1D: // Z 1 H -
                {
                    break;
                }
                case 0x24: // Z 0 H -
                {
                    break;
                }
                case 0x25: // Z 1 H -
                {
                    break;
                }
                case 0x27: // Z - 0 C
                {
                    break;
                }
                case 0x2C: // Z 0 H -
                {
                    break;
                }
                case 0x2D: // Z 1 H -
                {
                    break;
                }
                case 0x2F: // - 1 1 -
                {
                    break;
                }
                case 0x34: // Z 0 H -
                {
                    break;
                }
                case 0x35: // Z 1 H -
                {
                    break;
                }
                case 0x37: // - 0 0 1
                {
                    break;
                }
                case 0x3C: // Z 0 H -
                {
                    break;
                }
                case 0x3D: // Z 1 H -
                {
                    break;
                }
                case 0x3F: // - 0 0 C
                {
                    break;
                }
                case 0x80: // Z 0 H C
                {
                    break;
                }
                case 0x81: // Z 0 H C
                {
                    break;
                }
                case 0x82: // Z 0 H C
                {
                    break;
                }
                case 0x83: // Z 0 H C
                {
                    break;
                }
                case 0x84: // Z 0 H C
                {
                    break;
                }
                case 0x85: // Z 0 H C
                {
                    break;
                }
                case 0x86: // Z 0 H C
                {
                    break;
                }
                case 0x87: // Z 0 H C
                {
                    break;
                }
                case 0x88: // Z 0 H C
                {
                    break;
                }
                case 0x89: // Z 0 H C
                {
                    break;
                }
                case 0x8A: // Z 0 H C
                {
                    break;
                }
                case 0x8B: // Z 0 H C
                {
                    break;
                }
                case 0x8C: // Z 0 H C
                {
                    break;
                }
                case 0x8D: // Z 0 H C
                {
                    break;
                }
                case 0x8E: // Z 0 H C
                {
                    break;
                }
                case 0x8F: // Z 0 H C
                {
                    break;
                }
                case 0x90: // Z 1 H C
                {
                    break;
                }
                case 0x91: // Z 1 H C
                {
                    break;
                }
                case 0x92: // Z 1 H C
                {
                    break;
                }
                case 0x93: // Z 1 H C
                {
                    break;
                }
                case 0x94: // Z 1 H C
                {
                    break;
                }
                case 0x95: // Z 1 H C
                {
                    break;
                }
                case 0x96: // Z 1 H C
                {
                    break;
                }
                case 0x97: // Z 1 H C
                {
                    break;
                }
                case 0x98: // Z 1 H C
                {
                    break;
                }
                case 0x99: // Z 1 H C
                {
                    break;
                }
                case 0x9A: // Z 1 H C
                {
                    break;
                }
                case 0x9B: // Z 1 H C
                {
                    break;
                }
                case 0x9C: // Z 1 H C
                {
                    break;
                }
                case 0x9D: // Z 1 H C
                {
                    break;
                }
                case 0x9E: // Z 1 H C
                {
                    break;
                }
                case 0x9F: // Z 1 H C
                {
                    break;
                }
                case 0xA0: // Z 0 1 0
                {
                    break;
                }
                case 0xA1: // Z 0 1 0
                {
                    break;
                }
                case 0xA2: // Z 0 1 0
                {
                    break;
                }
                case 0xA3: // Z 0 1 0
                {
                    break;
                }
                case 0xA4: // Z 0 1 0
                {
                    break;
                }
                case 0xA5: // Z 0 1 0
                {
                    break;
                }
                case 0xA6: // Z 0 1 0
                {
                    break;
                }
                case 0xA7: // Z 0 1 0
                {
                    break;
                }
                case 0xA8: // Z 0 0 0
                {
                    break;
                }
                case 0xA9: // Z 0 0 0
                {
                    break;
                }
                case 0xAA: // Z 0 0 0
                {
                    break;
                }
                case 0xAB: // Z 0 0 0
                {
                    break;
                }
                case 0xAC: // Z 0 0 0
                {
                    break;
                }
                case 0xAD: // Z 0 0 0
                {
                    break;
                }
                case 0xAE: // Z 0 0 0
                {
                    break;
                }
                case 0xAF: // 1 0 0 0
                {
                    break;
                }
                case 0xB0: // Z 0 0 0
                {
                    break;
                }
                case 0xB1: // Z 0 0 0
                {
                    break;
                }
                case 0xB2: // Z 0 0 0
                {
                    break;
                }
                case 0xB3: // Z 0 0 0
                {
                    break;
                }
                case 0xB4: // Z 0 0 0
                {
                    break;
                }
                case 0xB5: // Z 0 0 0
                {
                    break;
                }
                case 0xB6: // Z 0 0 0
                {
                    break;
                }
                case 0xB7: // Z 1 H C
                {
                    break;
                }
                case 0xB8: // Z 1 H C
                {
                    break;
                }
                case 0xB9: // Z 1 H C
                {
                    break;
                }
                case 0xBA: // Z 1 H C
                {
                    break;
                }
                case 0xBB: // Z 1 H C
                {
                    break;
                }
                case 0xBC: // Z 1 H C
                {
                    break;
                }
                case 0xBD: // Z 1 H C
                {
                    break;
                }
                case 0xBE: // Z 1 H C
                {
                    break;
                }
                case 0xBF: // 1 1 0 0
                {
                    break;
                }
                case 0xC6: // Z 0 H C
                {
                    break;
                }
                case 0xCE: // Z 0 H C
                {
                    break;
                }
                case 0xD6: // Z 1 H C
                {
                    break;
                }
                case 0xDE: // Z 1 H C
                {
                    break;
                }
                case 0xE6: // Z 0 1 0
                {
                    break;
                }
                case 0xEE: // Z 0 0 0
                {
                    break;
                }
                case 0xF6: // Z 0 0 0
                {
                    break;
                }
                case 0xFE: // Z 1 H C
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

        int op_word_alu(State* state, UNUSED word basePC, byte opcode)
        {
            switch(opcode) {
                case 0x03:
                {
                    break;
                }
                case 0x09:
                {
                    break;
                }
                case 0x0B:
                {
                    break;
                }
                case 0x13:
                {
                    break;
                }
                case 0x19:
                {
                    break;
                }
                case 0x1B:
                {
                    break;
                }
                case 0x23:
                {
                    break;
                }
                case 0x29:
                {
                    break;
                }
                case 0x2B:
                {
                    break;
                }
                case 0x33:
                {
                    break;
                }
                case 0x39:
                {
                    break;
                }
                case 0x3B:
                {
                    break;
                }
                case 0xE8:
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

        int op_jmp(State* state, UNUSED word basePC, byte opcode)
        {
            switch(opcode) {
                case 0x18:
                {
                    break;
                }
                case 0x20:
                {
                    break;
                }
                case 0x28:
                {
                    break;
                }
                case 0x30:
                {
                    break;
                }
                case 0x38:
                {
                    break;
                }
                case 0xC0:
                {
                    break;
                }
                case 0xC2:
                {
                    break;
                }
                case 0xC3:
                {
                    break;
                }
                case 0xC4:
                {
                    break;
                }
                case 0xC7:
                {
                    break;
                }
                case 0xC8:
                {
                    break;
                }
                case 0xC9:
                {
                    break;
                }
                case 0xCA:
                {
                    break;
                }
                case 0xCC:
                {
                    break;
                }
                case 0xCD:
                {
                    break;
                }
                case 0xCF:
                {
                    break;
                }
                case 0xD0:
                {
                    break;
                }
                case 0xD1:
                {
                    break;
                }
                case 0xD2:
                {
                    break;
                }
                case 0xD3:
                {
                    break;
                }
                case 0xD7:
                {
                    break;
                }
                case 0xD8:
                {
                    break;
                }
                case 0xD9:
                {
                    break;
                }
                case 0xDA:
                {
                    break;
                }
                case 0xDC:
                {
                    break;
                }
                case 0xDD:
                {
                    break;
                }
                case 0xDF:
                {
                    break;
                }
                case 0xE7:
                {
                    break;
                }
                case 0xE8:
                {
                    break;
                }
                case 0xE9:
                {
                    break;
                }
                case 0xEA:
                {
                    break;
                }
                case 0xEC:
                {
                    break;
                }
                case 0xEF:
                {
                    break;
                }
                case 0xF7:
                {
                    break;
                }
                case 0xFF:
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

        int op_misc(State* state, UNUSED word basePC, byte opcode)
        {
            switch(opcode) {
                case 0x00: // NOP
                {
                    break;
                }
                case 0x10: // STOP
                {
                    break;
                }
                case 0x76: // HALT
                {
                    break;
                }
                case 0xCB: // PREFIX
                {
                    break;
                }
                case 0xF3: // DI
                {
                    break;
                }
                case 0xFB: // EI
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

        int op_byte_srb(State* state, UNUSED word basePC, byte opcode)
        {
            switch(opcode) {
                case 0x07: // 0 0 0 C
                {
                    break;
                }
                case 0x0F: // 0 0 0 C
                {
                    break;
                }
                case 0x17: // 0 0 0 C
                {
                    break;
                }
                case 0x1F: // 0 0 0 C
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

        Instruction GetInstruction(byte opcode) {
            std::map<byte, Instruction> instrMap = GetInstructionMap();
            return instrMap.at(opcode);
        }

        std::map<byte, Instruction> GetInstructionMap()
        {
            std::map<byte, Instruction> instructionMap {
                {0x00, {op_misc, 1, 4}},
                {0x01, {op_word_ld, 3, 12}},
                {0x02, {op_byte_ld, 1, 8}},
                {0x03, {op_word_alu, 1, 8}},
                {0x04, {op_byte_alu, 1, 4}},
                {0x05, {op_byte_alu, 1, 4}},
                {0x06, {op_byte_ld, 2, 8}},
                {0x07, {op_byte_srb, 1, 4}},
                {0x08, {op_word_ld, 3, 20}},
                {0x09, {op_word_alu, 1, 8}},
                {0x0A, {op_byte_ld, 1, 8}},
                {0x0B, {op_word_alu, 1, 8}},
                {0x0C, {op_byte_alu, 1, 4}},
                {0x0D, {op_byte_alu, 1, 4}},
                {0x0E, {op_byte_ld, 2, 8}},
                {0x0F, {op_byte_srb, 1, 4}},
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
                {0xC0, {op_jmp, 1, 20}}, // 20/8
                {0xC1, {op_word_ld, 1, 12}},
                {0xC2, {op_jmp, 3, 16}}, // 16/12
                {0xC3, {op_jmp, 3, 16}},
                {0xC4, {op_jmp, 3, 24}}, // 24/12
                {0xC5, {op_word_ld, 1, 16}},
                {0xC6, {op_byte_alu, 2, 8}},
                {0xC7, {op_jmp, 1, 16}},
                {0xC8, {op_jmp, 1, 20}}, // 20/8
                {0xC9, {op_jmp, 1, 16}},
                {0xCA, {op_jmp, 3, 16}}, // 16/12
                {0xCB, {op_misc, 1, 4}},
                {0xCC, {op_jmp, 3, 24}}, // 24/12
                {0xCD, {op_jmp, 3, 24}},
                {0xCE, {op_byte_alu, 2, 8}},
                {0xCF, {op_jmp, 1, 16}},
                {0xD0, {op_jmp, 1, 20}}, // 20/8
                {0xD1, {op_word_ld, 1, 12}},
                {0xD2, {op_jmp, 3, 16}}, // 16/12
                {0xD4, {op_jmp, 3, 24}}, // 24/12
                {0xD5, {op_word_ld, 1, 16}},
                {0xD6, {op_byte_alu, 2, 8}},
                {0xD7, {op_jmp, 1, 16}},
                {0xD8, {op_jmp, 1, 20}}, // 20/8
                {0xD9, {op_jmp, 1, 16}},
                {0xDA, {op_jmp, 3, 16}}, // 16/12
                {0xDC, {op_jmp, 3, 24}}, // 24/12
                {0xDE, {op_byte_alu, 2, 8}},
                {0xDF, {op_jmp, 1, 16}},
                {0xE0, {op_byte_ld, 2, 12}},
                {0xE1, {op_word_ld, 1, 12}},
                {0xE2, {op_byte_ld, 1, 8}},
                {0xE5, {op_word_ld, 1, 16}},
                {0xE6, {op_byte_alu, 2, 8}},
                {0xE7, {op_jmp, 1, 16}},
                {0xE8, {op_word_alu, 2, 16}},
                {0xE9, {op_jmp, 1, 4}},
                {0xEA, {op_byte_ld, 3, 16}},
                {0xEE, {op_byte_alu, 2, 8}},
                {0xEF, {op_jmp, 1, 16}},
                {0xF0, {op_byte_ld, 2, 12}},
                {0xF1, {op_word_ld, 1, 12}},
                {0xF2, {op_byte_ld, 1, 8}},
                {0xF3, {op_misc, 1, 4}},
                {0xF5, {op_word_ld, 1, 16}},
                {0xF6, {op_byte_alu, 2, 8}},
                {0xF7, {op_jmp, 1, 16}},
                {0xF8, {op_word_ld, 2, 12}},
                {0xF9, {op_word_ld, 1, 8}},
                {0xFA, {op_byte_ld, 3, 16}},
                {0xFB, {op_misc, 1, 4}},
                {0xFE, {op_byte_alu, 2, 8}},
                {0xFF, {op_jmp, 1, 16}},
            };

            return instructionMap;
        }
    }
}

#pragma GCC diagnostic error "-Wunused-parameter"
