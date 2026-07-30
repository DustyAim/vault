#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
    std::vector<std::string> tower;
    for (int i = 0; i < nFloors; i++)
        tower.push_back(std::string(nFloors-1-i, ' ') + std::string(2*i+1, '*') +std::string(nFloors-1-i, ' '));
    return tower;
}