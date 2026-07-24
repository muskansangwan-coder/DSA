class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int startRow = 0 , endRow = rows - 1 , startCol = 0 , endCol = cols-1;
        vector<int> spiral;

        while(startRow <= endRow && startCol <= endCol){
            // add starting row
            for(int i = startCol; i <= endCol; i++)
                spiral.push_back(matrix[startRow][i]);
            startRow++;

            // add ending column
            for(int i = startRow; i <= endRow; i++)
                spiral.push_back(matrix[i][endCol]);
            endCol--;

            // add ending row in reverse order
            for(int i = endCol; i >= startCol && startRow <= endRow; i--)
                spiral.push_back(matrix[endRow][i]);
            endRow--;

            // add starting colunm in reverse order
            for(int i = endRow; i >= startRow && startCol <= endCol; i--)
                spiral.push_back(matrix[i][startCol]);
            startCol++;
        }
        return spiral;
    }
};