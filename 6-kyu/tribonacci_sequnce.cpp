std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result = signature;
    if (n<3){
        signature.resize(n);
        return signature;
    }
    int i = signature.size();
    while (result.size() < n){
        result.push_back(result[result.size()-3] + result[result.size()-2]+ result[result.size()-1]);
    }
    return result;

}