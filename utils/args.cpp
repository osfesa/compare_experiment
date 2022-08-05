#include <iostream>

using namespace std;

struct ArgsType {
    string image1;
    string image2;
};

// Overload << operator for argType struct
ostream& operator<<(ostream& os, const ArgsType& args) {
    return os << "Selected arguments:" << endl
              << "Image 1: " << args.image1 << endl
              << "Image 2: " << args.image2 << endl;
}

ArgsType parseArgs(char * argv[]){

    ArgsType args = {argv[0], argv[1]}; 

    cout << args;
    return args;

/*
for (int i = 1; i < argc; i++) {

    if (strcmp(argv[i],"-i")==0) {
        filename = argv[i+1];
        printf("filename: %s",filename);
    } else if (strcmp(argv[i],"-c")==0) {
        convergence = atoi(argv[i + 1]);
        printf("\nconvergence: %d",convergence);
    } else if (strcmp(argv[i],"-a")==0) {
        accuracy = atoi(argv[i + 1]);
        printf("\naccuracy:%d",accuracy);
    } else if (strcmp(argv[i],"-t")==0) {
        targetBitRate = atof(argv[i + 1]);
        printf("\ntargetBitRate:%f",targetBitRate);
    } else if (strcmp(argv[i],"-f")==0) {
        frameRate = atoi(argv[i + 1]);
        printf("\nframeRate:%d",frameRate);
    }

}
*/


/*

char* getCmdOption(char ** begin, char ** end, const std::string & option)
{
    char ** itr = std::find(begin, end, option);
    if (itr != end && ++itr != end)
    {
        return *itr;
    }
    return 0;
}

bool cmdOptionExists(char** begin, char** end, const std::string& option)
{
    return std::find(begin, end, option) != end;
}

        char * filename =    if(cmdOptionExists(argv, argv+argc, "-h"))
    {
        // Do stuff
    }

    char * filename = getCmdOption(argv, argv + argc, "-f"); getCmdOption(argv, argv + argc, "-f");


*/

}