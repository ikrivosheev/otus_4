#include <vector>
#include <sstream>
#include <list>
#include <string>
#include <gtest/gtest.h>

#include "utils.h"

TEST(TestIntegerType, Integer) {
    std::stringstream result;
    std::string except{"127.0.0.1"};

    print(result, int(2130706433));
    
    ASSERT_EQ(result.str(), except);
}

TEST(TestIntegerType, Char) {
    std::stringstream result;
    std::string except{"255"};

    print(result, char(-1));
    
    ASSERT_EQ(result.str(), except);
}

TEST(TestContainerType, String) {
    std::stringstream result;
    std::string except{"1.1.1.1"};

    print(result, std::string{"1.1.1.1"});
    
    ASSERT_EQ(result.str(), except);
}

TEST(TestContainerType, Vector) {
    std::stringstream result;
    std::string except{"1.1.1.1"};

    print(result, std::vector<int>{1,1,1,1});
    
    ASSERT_EQ(result.str(), except);
}

TEST(TestContainerType, List) {
    std::stringstream result;
    std::string except{"1.1.1.1"};

    print(result, std::list<int>{1,1,1,1});
    
    ASSERT_EQ(result.str(), except);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

