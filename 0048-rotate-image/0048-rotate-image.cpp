class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // transpose of matrix
        for (int i = 0; i < rows; i++) {
            for (int j = i + 1; j < cols; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reverse rows of matrix
        for (int i = 0; i < rows; i++) {
            int st = 0, end = cols - 1;
            while (st < end) {
                swap(matrix[i][st++], matrix[i][end--]);
            }
        }
    }
};