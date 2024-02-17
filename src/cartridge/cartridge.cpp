#include "cartridge/cartridge.hpp"
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
            int count = 1;
            for (size_t i = 0; i < CARTIDGE_MAX_SIZE; i++, count++) {
                printf("%02X", mContents[i]);

                if (count % 2 == 0)
                    printf(" ");

                if (count % 8 == 0) {
                    printf("\n");
                    count = 0;
                }
            }

            std::cout << std::endl;
        }
    }
}
