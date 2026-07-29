#include <string>
#include <vector>

class TwoToOne {
public:
    static std::string longest(const std::string &s1, const std::string &s2) {
        std::vector<bool> dict(26, false);
        for (char c : s1+s2)
            dict[c - 'a'] = true;
        std::string result;
        for (int i = 0; i < dict.size(); ++i)
            if (dict[i]) result += static_cast<char>('a' + i);
        
        return result;
    }
};