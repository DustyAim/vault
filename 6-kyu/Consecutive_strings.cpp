#include <string>
#include <vector>

class LongestConsec {
public:
    static std::string longestConsec(const std::vector<std::string>& strarr, int k) {
        if (strarr.size() == 0 || k <= 0 || k > strarr.size()) return "";
      
        std::vector<std::string> combs(strarr.size() - k + 1);
        for (int i = 0; i <= strarr.size() - k; ++i)
            for (int j = i; j < i + k; ++j)
                combs[i] += strarr[j];

        int bestIdx = 0;
        int maxLen = combs[0].size();
        for (int i = 1; i < combs.size(); ++i) {
            if (combs[i].size() > maxLen) {
                maxLen = combs[i].size();
                bestIdx = i;
            }
        }
        return combs[bestIdx];
    }
};