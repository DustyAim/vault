#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
    int result = 0;
    for (int i = 0; i< busStops.size(); i++)
        result += busStops[i].first - busStops[i].second;
    return result;
}