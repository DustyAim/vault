#include <string>

std::string makeUpperCase(const std::string& str) {
    std::string result = str;
    for (char &c : result)
        if (c >= 'a' && c <= 'z') c -= 32;
    return result;
}