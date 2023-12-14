#include "gameboy/display.hpp"
#include <SDL2/SDL.h>

namespace GameBoy
{
    Display::Display()
    {
        InitDisplay();
    }

    Display::~Display()
    {

    }

    int Display::InitDisplay()
    {
        // For now since I only want to see if the screen will display anythin I will init tht video sub system only
        Uint32 flags = SDL_INIT_VIDEO;
        int success = SDL_InitSubSystem(flags);
        return success;
    }
}
