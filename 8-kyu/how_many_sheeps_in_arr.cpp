#include <vector>

using namespace std;

int count_sheep(vector<bool> arr)
{
    int counter =0;
    for (int i=0; i< size(arr); I++)
        if (arr[i] == true)
            counter++;
    return counter;
}