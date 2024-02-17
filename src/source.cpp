#include "utils/logger.hpp"
#include "gameboy/classic.hpp"
#include "gameboy/display.hpp"

Logger logger;
using namespace GameBoy;
int main(int argc, char** argv) 
{
    logger = Logger("logs/", "info");

    // TODO: Check for debug flag passed to pre proc 
    logger.EnableTracing();

    std::string path;
    if (argc == 1) {
        path = "roms/cpu_instrs/cpu_instrs.gb";
        logger.Log(INFO, "Usage: ./gameboy-emu <rom path>");
        logger.Log(TRACE, "No rom path provided... Defaulting to %s", path.data());
    } else {
        path = argv[1];
    }

    Classic gb = Classic();
    Cartridge::Cartridge cartridge = Cartridge::Cartridge(path);
    
    gb.LoadCartridge(&cartridge);

    // gb.DumpMemMap();
    exit(1);
    gb.Start();

    // For now the display is seperate from the gb
    Display display = Display();
}
