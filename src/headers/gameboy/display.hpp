#pragma once
#ifndef _GB_DISPLAY_HPP_
#define _GB_DISPLAY_HPP_

namespace GameBoy
{
    class Display
    {
        public:
            Display();
            ~Display();

        private:
            int InitDisplay();
    };
}

#endif // _GB_DISPLAY_HPP_
