#include <string> // внутри стандартной библиотеки std::basic_string
// есть числовой преобразовать to_string()
// пользуемся поэтому стандартной функцией

std::string number_to_string(int num) {
    return std::to_string(num);
}