#include <string>
#include <climits>
#include <sstream>

std::string highAndLow(const std::string& numbers){
    int lowest = INT_MAX;
    int highest = INT_MIN;
    std::vector<int> digits;
    int result = 0;
    int sign = 1;
    for (char c : numbers)
    {
        if (c >= '0' && c <= '9')
            result = result*10 + (c - '0');
        if (c == '-')
            sign = -1;
        if (c == ' ')
        {
            digits.push_back(sign*result);
            result = 0;
            sign = 1;
        }
    }
    digits.push_back(sign * result);
    for (int i = 0; i < digits.size(); i++)
    {
        if (lowest > digits[i]) lowest = digits[i];
        if (highest < digits[i]) highest = digits[i];
    }
    std::ostringstream oss;
    oss << highest << ' ' << lowest;
    return oss.str();
}