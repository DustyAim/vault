#include <string>

std::string DNAtoRNA(std::string dna){
  std::string rna = dna; 
  std::replace(rna.begin(), rna.end(), 'T', 'U');
  return rna;
}
/*
std::string dna_to_rna(const std::string& dna) {
    std::string rna = dna;  // копия исходной строки
    for (char& c : rna) {   // проходим по каждому символу
        if (c == 'T') {
            c = 'U';
        }
    }
    return rna;
}
*/
