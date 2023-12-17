#include "cartridge/cartridge.hpp"
#include "utils/common.hpp"
#include <fstream>
#include <iostream>

namespace GameBoy
{
    namespace Cartridge
    {
        std::string ToHex(const string& s, bool upper_case)
        {
            std::ostringstream ret;

            for (std::string::size_type i = 0; i < s.length(); ++i) {
                int z = s[i] & 0xFF;
                ret << std::hex << std::setfill('0') << std::setw(2) << (upper_case ? std::uppercase : std::nouppercase) << z;
            }

            return ret.str();
        }

        Cartridge::Cartridge()
        {

        }

        Cartridge::~Cartridge()
        {

        }

        int Cartridge::LoadContents(std::string_view path)
        {
            std::ifstream file;
            file.open(path.data(), std::ios::in | std::ios::binary | std::ios::ate);

            if (file.is_open()) {
                file.seekg(0, std::ios::beg);
                auto readSize = std::size_t(1);
                auto out = std::string();
                auto buf = std::string(readSize, '\0');

                while (file.read(&buf[0], readSize)) {
                    out.append(buf, 0, file.gcount());
                }

                file.close();
                // std::cout << out << std::endl;
                std::string hexBuf = ToHex(out, true);

                for (size_t i = 0; i < hexBuf.size(); i++) {
                    if (i % 4 == 0) {
                        std::cout << " ";
                    }
                    if (i % 16 == 0) {
                        std::cout << "\n";
                    }

                    std::cout << hexBuf[i];
                }
            }

            return 0;
        }
    }
}
