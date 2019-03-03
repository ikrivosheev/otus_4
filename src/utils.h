#ifndef UTILS_H
#define UTILS_H

#include <type_traits>
#include <iostream>
#include <vector>


class IPAddress {
    private:
        std::vector<uint8_t> ip;

    public:
        template<typename T>
        IPAddress(const T& value) {
            this->ip.reserve(sizeof(value));
            for (size_t i = 0; i < sizeof(value); i++) {
                uint8_t byte = value >> (i * 8);
                this->ip.push_back(byte);
            }
        } 

        friend std::ostream& operator << (std::ostream& out, const IPAddress& o);
};

#endif
