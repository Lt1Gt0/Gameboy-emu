#include "cartridge/cartridge.hpp"
#include "utils/common.hpp"
#include <fstream>
#include <iostream>

namespace GameBoy
{
    namespace Cartridge
    {
        Cartridge::Cartridge()
        {

        }

        Cartridge::~Cartridge()
        {

        }

        int Cartridge::LoadContents(std::string_view path)
        {
            std::ofstream file;
            file.open(path.data(), std::ios::out | std::ios::binary);

            if (!file.is_open()) {
                error(Severity::high, "File", "Unable to open file");
            }

            file.close();

            logger.Log(DEBUG, "Successfully opened and closed file");

            return 0;
        }
    }
}
