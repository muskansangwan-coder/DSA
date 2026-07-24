class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // transpose matrix
        for(int i =0;i<rows;i++){
            for(int j = i+1; j<cols;j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        int left = 0 , right = cols-1;

        // reverse rows
        for(int i = 0;i<rows;i++){
            while(left<right){
                swap(matrix[i][left] , matrix[i][right]);
                left++;
                right--;
            }
            left = 0 , right = cols-1;
        }
    }
};