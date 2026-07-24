#include <string>
#include <vector>
#include <climits>

int find_short(std::string str)
{
    std::vector<int> words;
    int cur_len = 0;
    int result = INT_MAX;
    for (char ch: str)
    {
        if (ch != ' ')
            cur_len++;
        else {
            words.push_back(cur_len);
            cur_len = 0;
        }
    }
    if (cur_len > 0) words.push_back(cur_len);
    int n = words.size();
    for (int i = 0; i<n; i++)
    {
        if (result > words[i])
            result = words[i];
    }
    return result;
}