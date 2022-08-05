#include <iostream>

using namespace std;

struct ArgsType {
    string image1;
    string image2;
};

// Overload << operator for argType struct
ostream& operator<<(ostream& os, const ArgsType& args);

ArgsType parseArgs(char * argv[]);