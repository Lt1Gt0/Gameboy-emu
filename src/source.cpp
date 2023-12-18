#include "utils/logger.hpp"
#include "gameboy/classic.hpp"
#include "gameboy/display.hpp"

Logger logger;
using namespace GameBoy;
int main(int argc, char** argv) 
{
    logger = Logger("logs/", "info");
    
    Classic gb = Classic();
    Cartridge::Cartridge cartridge = Cartridge::Cartridge("roms/cpu_instrs/cpu_instrs.gb");

    gb.LoadCartridge(&cartridge);
    gb.Start();

    // For now the display is seperate from the gb
    Display display = Display();
}
