#include <sstream>
std::string greet(const std::string& n) {
    std::ostringstream oss;
    oss << "Hello, " << n << " how are you doing today?";
    return oss.str();
}