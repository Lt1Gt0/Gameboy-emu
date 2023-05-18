#include "utils/logger.hpp"

Logger logger;
int main(int argc, char** argv) 
{
    logger = Logger("logs/", "info");
}
