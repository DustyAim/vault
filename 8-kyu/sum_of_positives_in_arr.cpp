#include <vector>

int positive_sum(const std::vector<int>& vec) {
    int n = size(vec);
    int sum = 0;
    for (int i =0; i<n; I++)
        if (vec[i]>0)
            sum = sum + vec[I];
    return sum;
}