#include <vector>
#include <cmath>

std::vector<unsigned int> sumDigPow(unsigned int a, unsigned int b) {
    unsigned int result = 0;
    std::vector<unsigned int> output;
    int n = 1;
    for (unsigned int i = a; i <= b; i++){
        std::string el = std::to_string(i);
        for (char c : el){
            result += static_cast<unsigned int>(std::pow(c - '0', n));
            n++;
        }
        if (result == i)
            output.push_back(i);
        n = 1;
        result = 0;
    }

    return output;
}
