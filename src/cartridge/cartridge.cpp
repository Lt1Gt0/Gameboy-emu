#include "cartridge/cartridge.hpp"

#include <iomanip>
#include "utils/types.hpp"
#include "utils/logger.hpp"
#include <iostream>
#include <stdlib.h>
#include <string.h>

namespace GameBoy
{
    namespace Cartridge
    {
        Cartridge::Cartridge(std::string_view path)
        {
            mContents = new byte[CARTIDGE_MAX_SIZE];
            LoadContents(path);
        }

        Cartridge::~Cartridge()
        {

        }

        int Cartridge::LoadContents(std::string_view path)
        {
            // Reset the current contents of the loaded data
            memset(mContents, 0, CARTIDGE_MAX_SIZE);

            FILE* fp = fopen(path.data(), "rb");
            fread(mContents, 1, CARTIDGE_MAX_SIZE, fp);
            fclose(fp);

            logger.Log(SUCCESS, "Loaded content of ROM into cartidge contents");
            return 0;
        }

        void Cartridge::DumpContents()
        {
            for (size_t i = 1; i <= CARTIDGE_MAX_SIZE ; i++) {
                std::cout << std::hex << std::setfill('0') << std::setw(2) << std::uppercase << int(mContents[i-1]);

                if (i % 2 == 0)
                    std::cout << " ";

                if (i % 16 == 0)
                    std::cout << "\n";
            }

            std::cout << std::endl;
        }
    }
}
