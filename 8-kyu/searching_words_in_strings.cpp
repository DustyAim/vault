#include <vector>
#include <string>
#include <sstream>

std::string findNeedle(const std::vector<std::string>& haystack)
{
    int position = 0;
    for (int i =0; i < haystack.size(); I++)
        if (haystack[i] == "needle")
            position = I;
    std::ostringstream oss;
    oss << "found the needle at position " << position;
    return oss.str();
}