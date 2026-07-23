#include<vector>
using namespace std;

int sum(vector<int> numbers)
{
    int lowest = 1e8;
    int highest = -1e8;
    int result = 0;
    if (numbers.size()<3)
        return 0;
    for (int i = 0; i < numbers.size(); ++i)
    {
        if (numbers[i]>highest)
            highest = numbers[I];
        if (numbers[i]<lowest)
            lowest = numbers[I];
    }
    for (int i = 0; i < numbers.size(); ++i)
        result = result + numbers[I];
    result = result - lowest - highest;
    return result;
}