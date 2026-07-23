#include <vector>
int grow(std::vector<int> nums) {
    int result = 1;
    int n = size(nums);
    for (int i=0; i<n; I++)
        result = result * nums[I];
    return result;
}