long queueTime(std::vector<int> customers,int n){
    std::vector<int> tils;
    tils.resize(n);
    for (int i = 0; i < customers.size(); i++){
        tils[0] += customers[i];
        sort(tils.begin(), tils.end());
    }
    return tils[n-1];
}
