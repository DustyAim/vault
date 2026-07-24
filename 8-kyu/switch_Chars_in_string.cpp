#include <string>

std::string DNAStrand(const std::string& dna)
{
    std::string result;
    for (char c : dna)
    {
        switch(c){
            case ('T'): {result.push_back('A'); break;}
            case ('A'): {result.push_back('T'); break;}
            case ('G'): {result.push_back('C'); break;}
            case ('C'): {result.push_back('G'); break;}
            default: {result.push_back(c); break;}
        }
    }
    return result;
}