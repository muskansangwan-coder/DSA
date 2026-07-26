class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0, close = 0;

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (ch == '(')
                open++;
            else
                close++;

            if (open == close) {
                s.erase(i, 1);
                open = 0;
                close = 0;
                i--;
            } else if (open == 1 && close == 0) {
                s.erase(i, 1);
                i--;
            }
        }
        return s;
    }
};