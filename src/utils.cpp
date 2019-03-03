#include "utils.h"

std::ostream& operator << (std::ostream& out, const IPAddress& obj) {
    for (auto it = obj.ip.cbegin(); it != obj.ip.cend(); ++it) {
        if (it != obj.ip.cbegin()) {
            out << '.';
        }
        out << (int)(*it);
    }
    return out;
}
