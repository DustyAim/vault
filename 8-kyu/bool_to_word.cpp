#include <string>

std::string bool_to_word(bool value)
{
    std::string word;
    if (value == true)
        word = "Yes";
    else
        word = "No";
    return word;
}