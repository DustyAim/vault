#include <string>
#include <vector>
#include <utility>

std::string reverse_words(std::string str)
{
    auto start = str.begin();
    for (auto i=str.begin(); i < str.end(); i++)
    {
        if (*i == ' ')
        {
        auto end = i;
        std::reverse(start, end);
        start = i + 1;
        }
    }
    std::reverse(start, str.end());
    return str;
}