#include <cinttypes>

uint64_t descendingOrder(uint64_t a)
{
    std::vector<int> digits;
    if (a==0) return 0;
    while (a>0){
        digits.push_back(a%10);
        a /= 10;
    }
    std::sort(digits.begin(), digits.end(), std::greater<int>());
    uint64_t number = 0;
    for (int d : digits) {
        number = number * 10 + d;
    }
    return number;
}