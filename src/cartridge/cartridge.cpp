#include "cartridge/cartridge.hpp"
#include "utils/types.hpp"
#include "utils/logger.hpp"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>

namespace GameBoy
{
    namespace Cartridge
    {
        Cartridge::Cartridge(std::string_view path)
        {
            mPath = path;
            mContents = new byte[CARTIDGE_MAX_SIZE];
            int status = InitHeader();
            if (status) {
                std::cerr << "Cartridge Header\n";
                return;
            }

            LoadContents(path);
        }

        Cartridge::~Cartridge()
        {

        }

        // Setup nintendo graphic in header
        int Cartridge::InitHeader()
        {
            // From address range $0100 - $014F load the header
            // TODO: I am not sure what contents the header should contain
            // or how they should be loaded

            // $0104 - $0133 contains nintendo logo
            memcpy(mContents + CARTIDGE_HEADER_GRAPHIC_OFFSET, NINTENDO_GRAPHIC, sizeof(NINTENDO_GRAPHIC));

            // There are other things that the cartridge should contain after the nintendo logo
            // but for now they will be unimplemented

            return 0;
        }

        byte* Cartridge::Read(int offset, int count)
        {
            if (size_t(offset + count) > CARTIDGE_MAX_SIZE)
                return nullptr;

            byte* buf = new byte[count];
            memcpy(buf, mContents + offset, count);
            return buf;
        }

        int Cartridge::LoadContents(std::string_view path)
        {
            using namespace std;

            // Reset the current contents of the loaded data
            memset(mContents, 0, CARTIDGE_MAX_SIZE);
            
            // TODO: Make this use ifstream since I should be utilizing
            // c++ standards in a project like this
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

        size_t Cartridge::GetFileSize()
        {
            std::streampos begin, end;
            std::ifstream file(mPath.data(), std::ios::binary);

            begin = file.tellg();
            file.seekg(0, std::ios::end);
            end = file.tellg();

            file.close();
            return end - begin;
        }
    }
}
