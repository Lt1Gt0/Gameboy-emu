#include "cartridge/cartridge.hpp"

#include <iomanip>
#include "utils/types.hpp"
#include "utils/common.hpp"
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string.h>

namespace GameBoy
{
    namespace Cartridge
    {
        // std::string ToHex(const string& s, bool upper_case)
        // {
        //     std::ostringstream ret;
        //
        //     for (std::string::size_type i = 0; i < s.length(); ++i) {
        //         int z = s[i] & 0xFF;
        //         ret << std::hex << std::setfill('0') << std::setw(2) << (upper_case ? std::uppercase : std::nouppercase) << z;
        //     }
        //
        //     return ret.str();
        // }

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
            for (size_t i = 0; i < CARTIDGE_MAX_SIZE ; i++) {
                if (i % 2 == 0)
                    std::cout << " ";

                if (i % 4 == 0)
                    std::cout << "\n";

                int z = mContents[i] & 0xFF;
                // std::cout << std::hex << std::setfill('0') << std::setw(2) << std::uppercase << z;
                std::cout << std::hex << std::setw(1) << std::uppercase << z;
                // exit(1);
                // std::cout << std::hex << std::setw(2) << std::uppercase << z;
            }

            std::cout << std::endl;
        }
    }
}
