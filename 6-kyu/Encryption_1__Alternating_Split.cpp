std::string encrypt(std::string text, int n)
{
    std::string str = text;
    std::string begin;
    std::string end;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < str.size(); j++) {
            if ( (j+1)%2 == 0) begin += str[j];
            else end += str[j];
        }

        str = begin + end;
        end.clear();
        begin.clear();
    }
    return str;
}


std::string decrypt(std::string encryptedText, int n)
{
    if (n <= 0 || encryptedText.empty())
        return encryptedText;

    std::string str = encryptedText;
    std::string begin;
    std::string end;
    std::string text;
    text.resize(str.size());

    for (int h = 0; h < n; h++){
        begin.clear();
        end.clear();

        for (int i = 0; i < str.size() / 2; i++){
            begin += str[i];
            end += str[i + str.size() / 2];
        }

        if (str.size() % 2 == 1){
            end += str[str.size() - 1];
        }

        for (int g = 0; g < begin.size(); g++){
            text[2*g] = end[g];       // чётные позиции
            text[2*g+1] = begin[g];   // нечётные позиции
        }

        if (str.size() % 2 == 1){
            text[str.size()-1] = end[str.size() / 2];
        }

        str = text;
    }
    return str;
}