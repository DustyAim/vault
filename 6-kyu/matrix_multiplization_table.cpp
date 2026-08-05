   #include <vector>

using namespace std;
vector<vector<int>> multiplication_table(int n){
    std::vector<std::vector<int>> matrix(n, vector<int>(n, 0));
    for (int col = 0; col < n; col++)
        for (int row = 0; row < n; row++)
            matrix[col][row] = (col+1)*(row+1);
    return matrix;
}