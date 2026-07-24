class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        vector<int> row;

        for (int i = 0; i < numRows; i++) {
            if (i == 0) {
                pascal.push_back({1});
                continue;
            } else if (i == 1) {
                pascal.push_back({1, 1});
                continue;
            } else {
                row.push_back(1);
                for (int j = 1; j < i; j++) {
                    int ans = pascal[i - 1][j - 1] + pascal[i - 1][j];
                    row.push_back(ans);
                }
                row.push_back(1);
            }
            pascal.push_back(row);
            row.clear();
        }
        return pascal;
    }
};