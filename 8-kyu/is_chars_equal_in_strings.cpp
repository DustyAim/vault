#include <string>

bool feast(const std::string beast, const std::string dish) {
    return beast[0] == dish[0] && beast[beast.size() - 1] == dish[dish.size() - 1];
}