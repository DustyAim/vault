std::string incrementString(const std::string &str) {

    size_t pos = str.length();
    while (pos > 0 && isdigit(str[pos - 1])) {
        --pos;
    }
    std::string prefix = str.substr(0, pos);
    std::string suffix = str.substr(pos);

    if (suffix.empty())
        return str + "1";

    size_t len = suffix.length();
    unsigned long long num = std::stoull(suffix) + 1;
    std::string newSuffix = std::to_string(num);

    if (newSuffix.length() < len)
        newSuffix = std::string(len - newSuffix.length(), '0') + newSuffix;

    return prefix + newSuffix;
}