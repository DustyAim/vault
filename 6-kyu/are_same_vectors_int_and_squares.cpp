#include <vector>
#include <algorithm>

class Same {
public:
    static bool comp(std::vector<int>& a, std::vector<int>& b) {
        if (a.size() != b.size()) return false;

        std::vector<int> squares;
        for (int x : a) squares.push_back(x * x);

        std::sort(squares.begin(), squares.end());
        std::sort(b.begin(), b.end());

        for (size_t i = 0; i < squares.size(); ++i) {
            if (squares[i] != b[i]) return false;
        }
        return true;
    }
};