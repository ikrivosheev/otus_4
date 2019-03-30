#ifndef UTILS_H
#define UTILS_H

#include <type_traits>
#include <string>
#include <vector>
#include <list>
#include <iostream>

template <typename T>
struct is_container : std::false_type { };

template <typename... Ts> struct is_container<std::list<Ts...> > : std::true_type { };
template <typename... Ts> struct is_container<std::vector<Ts...> > : std::true_type { };


template<typename T>
typename std::enable_if<std::is_integral<T>::value, void>::type
print(std::ostream& out, const T&& value) {
    for (size_t i = sizeof(T); i != 0; --i) {
        uint8_t byte = value >> ((i - 1) * 8);
        if (i != sizeof(T)) {
            out << '.';
        }
        out << (int)byte;
    }
}


void print(std::ostream& out, const std::string& value) {
    out << value;
}

template<typename T>
typename std::enable_if<is_container<T>::value, void>::type
print(std::ostream& out, const T&& value) {
    for(auto it = value.cbegin(); it != value.cend(); ++it) {
        if (it != value.cbegin()) {
            out << '.';
        }
        out << *it;
    }
}

#endif
