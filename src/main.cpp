#include <iostream>
#include <vector>

#include "utils.h"
#include "version.h"


int main() {
    IPAddress ip1{(char)-1};
    IPAddress ip2{(short)0};
    IPAddress ip3{(int)2130706433};
    IPAddress ip4{(long)8875824491850138409};
    
    std::cout << ip1 << std::endl;
    std::cout << ip2 << std::endl;
    std::cout << ip3 << std::endl;
    std::cout << ip4 << std::endl;
    return 0;
}
