#include <string>

std::string alphabet_position(const std::string &text) {
    std::string str;
    for (char c : text){
        int pos = 0;
        if (c >= 'A' && c <= 'Z') pos = c - 'A' + 1;
        else if (c >= 'a' && c <= 'z') pos = c - 'a' + 1;
        else continue;
        str += std::to_string(pos) + ' ';
    }
    if (!str.empty()) str.pop_back();
    return str;
}