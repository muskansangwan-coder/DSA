class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool rowZero = false, colZero = false;
        int rows = matrix.size();
        int cols = matrix[0].size();

        // check zero in first row
        for (int i = 0; i < cols; i++) {
            if (matrix[0][i] == 0) {
                rowZero = true;
                break;
            }
        }

        // check zero in first column
        for (int i = 0; i < rows; i++) {
            if (matrix[i][0] == 0) {
                colZero = true;
                break;
            }
        }

        // check zero in remaining matrix
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // set zero in remaining matrix
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // set zero in first row
        if (rowZero == true) {
            for (int i = 0; i < cols; i++)
                matrix[0][i] = 0;
        }

        // set zero in first column
        if (colZero == true) {
            for (int i = 0; i < rows; i++)
                matrix[i][0] = 0;
        }
    }
};