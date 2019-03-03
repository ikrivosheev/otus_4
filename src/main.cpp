#include <iostream>
#include <vector>

#include "utils.h"
#include "version.h"


int main() {
    IPAddress ip{(uint32_t)300};
    
    std::cout << ip << std::endl;
    return 0;
}
