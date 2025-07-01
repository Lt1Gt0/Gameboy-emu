#include "utils/logger.hpp"
#include "utils/skutilflagparser.hpp"
#include "gameboy/classic.hpp"

#include <string>

using namespace GameBoy;

Logger logger;

std::string romPath = "";

void ChangeRomPath(OPT int inputCount, OPT char** inputVal)
{
    romPath = inputVal[0];
}

int main(int argc, char** argv) 
{
    logger = Logger("logs/", "info");

    std::string romPath;

    // I don't like how flags are created, mostly in how methods are passed
    // this is something that I would like to address in the core SKUTIL
    // flagparse header file as a whole but for now I will deal with it
    // because parsing flags is easier like this I swear
    SKUTIL::SK_VEC<SKUTIL::Flag> flags = SKUTIL::SK_VEC<SKUTIL::Flag> {
        {
            'f',
            "rom-file",
            "Location of rom file to be loaded into Gameboy",
            1,
            ChangeRomPath
        },
    };

    // TODO: Check for debug flag passed to pre proc 
    logger.EnableTracing();

    SKUTIL::FlagParser parser = SKUTIL::FlagParser(&flags);
    parser.ParseFlags(argc, argv);

    if (argc == 1) {
        logger.Log(ERROR, "Usage: ./gameboy-emu -f <rom path>");
        return -1;
    }

    // Initialize cartridge and load data from file [path] into memory
    Cartridge::Cartridge cartridge = Cartridge::Cartridge(romPath);

    // Initialize gameboy classic
    Classic gb = Classic();
    gb.LoadCartridge(&cartridge);
    gb.Start();
}
