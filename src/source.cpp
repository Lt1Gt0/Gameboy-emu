#include "utils/logger.hpp"
#include "gameboy/classic.hpp"

Logger logger;
using namespace GameBoy;
int main(int argc, char** argv) 
{
    logger = Logger("logs/", "info");
    
    Classic gb = Classic();

    // Work on cartridges after I have something working with the gameboy system
    Cartridge::Cartridge cartridge = Cartridge::Cartridge();

    gb.LoadCartridge(&cartridge);
    gb.Start();
}
