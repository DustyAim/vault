float find_uniq(const std::vector<float>& v) {
    float common;
    if (v[0] == v[1]) common = v[0];
    else if (v[0] == v[2]) common = v[0];
    else common = v[1];
   
    auto is_uniq_exists = std::find_if(v.begin(), v.end(), [common](float x) {return x!=common;}); 
    return (is_uniq_exists != v.end()) ? *is_uniq_exists : 0.0f;
}