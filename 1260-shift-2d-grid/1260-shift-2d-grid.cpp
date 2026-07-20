class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int cols = grid[0].size();
        int total = rows * cols;
        k = k % total;

        vector<vector<int>> ans(rows, vector<int>(cols));

        if (k == 0)
            return grid;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // 1 - D array index 
               int index = (i*cols + j + k) % total;
                // 2 - D array index
               ans[index/cols][index%cols] = grid[i][j];
            }
        }
        return ans;
    }
};