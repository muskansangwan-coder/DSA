class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n , vector<int>(n,0));
        int srow = 0, erow = n - 1, scol = 0, ecol = n - 1;

        int i = 1;
        while (i <= n * n) {
            // starting row
            for (int index = scol; index <= ecol; index++) {
                matrix[srow][index] = i++;
            }
            srow++;

            // ending column
            for (int index = srow; index <= erow; index++) {
                matrix[index][ecol] = i++;
            }
            ecol--;

            // ending row
            for (int index = ecol; (srow <= erow && index >= scol); index--) {
                matrix[erow][index] = i++;
            }
            erow--;

            // starting column
            for (int index = erow; (scol <= ecol && index >= srow); index--) {
                matrix[index][scol] = i++;
            }
            scol++;
        }
        return matrix;
    }
};