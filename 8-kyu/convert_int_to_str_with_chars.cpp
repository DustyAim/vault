#include <string>
#include <charconv>

std::string number_to_string(int num) {
    char buf[11]; // 10 цифр + знак итого на 11 чаров
    //  std::to_chars(buf, buf + sifeof(buf), num); - обозначаем функции начало буфера конец буфера+1 и обьект перевода
    auto[ptr, ec] = std::to_chars(buf, buf + sizeof(buf), num); // обозначаем функции начало буфера конец буфера+1 и обьект перевода
    // теперь через auto структура самаподразбилась на ptr - указатель конца ec ошибка
    return std::string(buf, ptr-buf);
}

