#include <iostream>
#include "Config.h"

#include "args.h"



int main(int argc, char * argv[])
{
    std::cout << " Version " << VERSION_MAJOR << "."
        << VERSION_MINOR << std::endl;
    auto args = parseArgs(argv);
    
    return 0;
}
