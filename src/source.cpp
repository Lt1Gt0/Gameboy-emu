#include "utils/logger.hpp"
#include "gameboy/gameboy.hpp"

Logger logger;
int main(int argc, char** argv) 
{
    logger = Logger("logs/", "info");
    
    GameBoy::GameBoy gameboy;

    // gameboy.Start();
}
