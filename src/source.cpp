#include "utils/logger.hpp"
#include "gameboy/classic.hpp"

Logger logger;
using namespace GameBoy;
int main(int argc, char** argv) 
{
    logger = Logger("logs/", "info");
    
    Classic gbc;
    Cartridge::Cartridge cartridge = Cartridge::Cartridge();

    gbc.LoadCartridge(&cartridge);

    // gameboy.Start();
}
