#include <vector>
bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
    int sum = 0;
    int avg_class = 0;
    for (int i = 0; i < size(classPoints); I++)
        sum = sum + classPoints[I];
    avg_class = sum /  size(classPoints);
    if (yourPoints > avg_class)
        return true;
    else return false;
}