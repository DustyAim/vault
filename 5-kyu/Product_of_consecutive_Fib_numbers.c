#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
    static std::vector<ull> productFib(ull prod){
        std::vector<unsigned long long> fibonacci;
        fibonacci.push_back(0);
        fibonacci.push_back(1);

        unsigned long long sum = 0;
        int n = 0;
        while (true){
            sum = fibonacci[n] + fibonacci[n+1];

            if (fibonacci[n] * fibonacci[n+1] == prod)
                return {fibonacci[n], fibonacci[n+1], 1ULL};

            if (fibonacci[n] * fibonacci[n+1] > prod)
                return {fibonacci[n], fibonacci[n+1], 0ULL};

            fibonacci.push_back(sum);
            n++;
        }
    }
};