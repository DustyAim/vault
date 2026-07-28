#include <vector>
#include <cmath>
#include <string>
#include <cctype>

int square_digits(int num) {
    std::string s = std::to_string(num);
    std::string result;
    for (char c : s)
    {
        int digit = (c - '0');// transfer char number to int
        result += std::to_string(digit*digit);
    }
    return std::stoi(result);
}
