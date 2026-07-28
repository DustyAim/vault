bool XO(const std::string& str)
{
    int x = 0;
    int o = 0;
    for (char c : str)
    {
        (c == 'x'|| c == 'X') ? x++ : (c == 'o' || c == 'O') ? o++ : 0;
    }
    return (x==o) ? true : false;
}