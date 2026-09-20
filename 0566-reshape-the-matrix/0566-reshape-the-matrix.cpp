class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n= mat[0].size();
        if (m*n != r*c) {
            return mat;
        }
        vector<vector<int>>reshaped(r, vector<int>(c,0));
        for (int i =0; i<m*n; i++) {
            int original_row = i/n;
            int original_col =i% n;
            int new_row = i/c;
            int new_col = i%c;
            reshaped[new_row][new_col] = mat[original_row][original_col];
        }
        return reshaped;
    }
};
    