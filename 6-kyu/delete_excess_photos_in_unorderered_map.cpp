std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    std::unordered_map<int, int> times_of_photos;
    std::vector<int> result;

    for (int x : arr){
        if (times_of_photos[x] < n){
            result.push_back(x);
            times_of_photos[x]++;
        }
    }
    return result;
}