int countSmileys(std::vector<std::string> arr)
{
    std::string eyes = ":;" ;
    std::string nose = "-~" ;
    std::string mouth = ")D" ;

    int counter = 0;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i].size() == 2)
        {
            if (eyes.find_first_of(arr[i][0]) != std::string::npos && mouth.find_first_of(arr[i][1]) != std::string::npos)
                counter++;
        }
        if (arr[i].size() == 3)
        {
            if (eyes.find_first_of(arr[i][0]) != std::string::npos && nose.find_first_of(arr[i][1]) != std::string::npos && mouth.find_first_of(arr[i][2]) != std::string::npos)
                counter++;
        }
    }
    return counter;
}