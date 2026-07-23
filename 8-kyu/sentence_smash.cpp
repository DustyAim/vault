#include <vector>
#include <string>

std::string smash(const std::vector<std::string>& words)
{
    std::string sentence = "";
    for (int i=0; i < size(words); I++)
        if (i > 0 && i<size(words))
            sentence.append(" "+words[I]);
        else sentence.append(words[I]);
    return sentence;
}