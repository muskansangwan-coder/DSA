class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;

        int rows = matrix.size();
        int cols = matrix[0].size();

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (matrix[r][c] == 0) {
                    row.push_back(r);
                    col.push_back(c);
                }
            }
        }

        for(int r : row){
            for (int c = 0; c < cols; c++) {
                matrix[r][c] = 0;
            }
        }

        for(int c : col){
            for (int r = 0; r < rows; r++) {
                matrix[r][c] = 0;
            }
        }
    }
};