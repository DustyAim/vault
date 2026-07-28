#include <string>
#include <vector>
#include <utility>

std::string reverse_words(std::string str)
{
    std::vector<int> words;

    int counter = 0;
    for (char ch : str)
    {
        if (ch != ' ')
        {
            counter++;
        }
        else
        {
            words.push_back(counter);
            counter = 0;
        }
    }
    if (counter != 0)
        words.push_back(counter);

    int i = 0;
    int start = 0;
    while (i<words.size())
    {
        for (int j=0; j < words[i]/2 ; j++)
        {
            std::swap(str[start+(j)], str[start+(words[i]-j-1)]);
        }
        start += words[i]+1; // + 1 от пробела
        i++;
    }

    return str;
}