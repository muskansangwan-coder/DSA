class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1)
            return s;

        if (numRows > s.size())
            return s;

        vector<vector<char>> vec(numRows, vector<char>(s.size(), ' '));
        int index = 0, col = 0, i = 0;

        while (index < s.size()) {
            for (i = 0; i < numRows && index < s.size(); i++) {
                vec[i][col] = s[index++];
            }
            col++;
            i -= 2;
            while (i > 0 && index < s.size()) {
                vec[i--][col++] = s[index++];
            }
        }

        int cols = s.size();
        string str = "";

        for (i = 0; i < numRows; i++) {
            for (int j = 0; j < cols; j++) {
                char ch = vec[i][j];
                if (ch != ' ') {
                    str.push_back(ch);
                }
            }
        }
        return str;
    }
};