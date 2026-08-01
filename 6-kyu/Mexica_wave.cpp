std::vector<std::string> wave(std::string y){
    int upper_position = 0;
    std::string y1 = y;
    std::vector<std::string> wave;
    while (upper_position != y.size()){
        if (y1[upper_position]== ' ') upper_position++;
        else
        {
            y1[upper_position] -= 32;
            wave.push_back(y1);
            upper_position++;
            y1 = y;
        }
    }

    return wave;
}