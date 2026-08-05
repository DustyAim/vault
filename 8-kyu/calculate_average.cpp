#include <vector>
#include <numeric>

double calc_average(const std::vector<double>& values)
{
    return (values.size() == 0) ? 0 : std::accumulate(values.begin(), values.end(), 0.0)/values.size() ;
}