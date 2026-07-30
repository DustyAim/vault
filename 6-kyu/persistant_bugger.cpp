

#include <vector>

int persistence(long long n) {
    std::vector<int> digits;
    int counter = 0;
    
    if (n < 10) return 0; 

    while (n >= 10) {
        digits.clear();             

        long long temp = n;
        while (temp > 0) {          
            digits.push_back(temp % 10);
            temp /= 10;
        }

        long long product = 1;
        for (int d : digits) {
            product *= d;
        }
        n = product;
        counter++;                  
    }
    return counter;
}