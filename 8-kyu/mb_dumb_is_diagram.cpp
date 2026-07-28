#include <string>
#include <vector>


bool is_isogram(const std::string& str)
{
    std::vector<char> uniq_letters;
    int counter = 0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            if (str[i]==str[j] || str[i]==str[j]+32)
            {
                counter++;
                if (counter>1)
                    return false;
            }
        }
        counter = 0;
    }
    return true;
}