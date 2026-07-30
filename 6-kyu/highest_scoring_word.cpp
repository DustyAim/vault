#include <string>

std::string highestScoringWord(const std::string &str) {
    int highest_score = 0;
    int sum = 0;
    std::string current_word;
    std::string best_word;
    for (char c : str) {
        if (c != ' ') {
            sum += (c - 'a'+1); 
            current_word += c;
        } else {
            if (sum > highest_score) {
                highest_score = sum;
                best_word = current_word;
            }
            sum = 0;
            current_word.clear();
        }
    }
    if (sum > highest_score) {
        best_word = current_word;
    }
    return best_word;
}