class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;

        int total = original.size();

        if(total != m*n)
            return ans;

        vector<vector<int>> matrix(m , vector<int>(n));

        for(int i=0;i<total; i++){
            matrix[i/n][i%n] = original[i];
        }

        return matrix;
    }
};