#include <sstream>

class Printer
{
public:
    static std::string printerError(const std::string &s)
    {
        int errors = 0;
        int drops = 0;

        for (char c : s)
        {
            if ( c < 'a' || c > 'm')
                errors++;
            else
                drops++;
        }

        std::ostringstream oss;
        oss << errors << "/" << drops+errors;
        return oss.str();
    }
};