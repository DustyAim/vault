
long long rowSumOddNumbers(unsigned n){
    long long result = 0;
    long counter = n;
    for (int i = 0; i<counter; i++){
        result = result + (n*(n-1)+1)+2*I;    // yeahh i've forgot about n^3 hehehe
    }
    return result;
}