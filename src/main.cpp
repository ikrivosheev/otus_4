#include <iostream>
#include <string>
#include <vector>
#include <list>

#include "utils.h"
#include "version.h"


int main() {
    print(std::cout, char(-1));
    std::cout << std::endl;
    print(std::cout, short(0));
    std::cout << std::endl;
    print(std::cout, int(2130706433));
    std::cout << std::endl;
    print(std::cout, long(8875824491850138409));
    std::cout << std::endl;
    print(std::cout, std::string{"127.0.0.1"});
    std::cout << std::endl;
    print(std::cout, std::vector<int>{1, 2, 3, 4});
    std::cout << std::endl;
    print(std::cout, std::list<int>{4, 3, 2, 1});
    std::cout << std::endl;

    return 0;
}
