class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans; // empty matrix

        int total = original.size();

        if(total != m*n)
            return ans;

        vector<vector<int>> matrix(m , vector<int>(n)); // matrix initialized with zeros

        for(int i=0;i<total; i++){
            matrix[i/n][i%n] = original[i];
        }

        return matrix;
    }
};