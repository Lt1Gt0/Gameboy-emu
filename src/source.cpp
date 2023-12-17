#include "utils/logger.hpp"
#include "gameboy/classic.hpp"
#include "gameboy/display.hpp"

Logger logger;
using namespace GameBoy;
int main(int argc, char** argv) 
{
    logger = Logger("logs/", "info");
    
    Classic gb = Classic();

    // Work on cartridges after I have something working with the gameboy system
    Cartridge::Cartridge cartridge = Cartridge::Cartridge();
    cartridge.LoadContents("roms/poweron.gb");

    gb.LoadCartridge(&cartridge);
    gb.Start();

    // For now the display is seperate from the gb
    Display display = Display();
}
