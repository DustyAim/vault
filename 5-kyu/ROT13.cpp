#include <string>
using namespace std;

string rot13(string msg)
{
    std::string result;
    for (char c : msg){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            int base = (c >= 'a') ? 'a' : 'A';   // определяем базу
            result += base + (c - base + 13) % 26; }
        else
            result += c;
    }
    return result;
}
