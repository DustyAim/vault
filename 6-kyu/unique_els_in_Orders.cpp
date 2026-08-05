#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
    std::vector<T> result;
    if (iterable.empty()) return result;

    result.push_back(iterable[0]);
    for (size_t i = 1; i < iterable.size(); ++i)
        if (iterable[i] != iterable[i - 1]) result.push_back(iterable[i]);

    return result;
}

std::vector<char> uniqueInOrder(const std::string& iterable){
    std::vector<char> result;
    if (iterable.empty()) return result;

    result.push_back(iterable[0]);
    for (int i = 1; i < iterable.size(); i++)
        if (iterable[i] != iterable[i-1]) result.push_back(iterable[i]);

    return result;

}