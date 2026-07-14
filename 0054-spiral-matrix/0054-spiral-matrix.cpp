class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> ans;

        int srow = 0, scol = 0, erow = rows - 1, ecol = cols - 1;

        while (srow <= erow && scol <= ecol) {
            // starting row
            for (int index = scol; index <= ecol; index++) {
                ans.push_back(matrix[srow][index]);
            }
            srow++;

            // ending column
            for (int index = srow; index <= erow; index++) {
                ans.push_back(matrix[index][ecol]);
            }
            ecol--;

            // ending row
            for (int index = ecol; (srow <= erow && index >= scol); index--) {
                ans.push_back(matrix[erow][index]);
            }
            erow--;

            // starting column
            for (int index = erow; (scol <= ecol && index >= srow); index--) {
                ans.push_back(matrix[index][scol]);
            }
            scol++;
        }
        return ans;
    }
};