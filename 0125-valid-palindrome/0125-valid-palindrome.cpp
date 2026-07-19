class Solution {
public:
    char toLower(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }
    bool checkAlpha(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int st = 0 , e = s.length() - 1;

        while (st < e) {
            if (!checkAlpha(s[st])) {
                st++;
            } else if (!checkAlpha(s[e])) {
                e--;
            } else {
                if (toLower(s[st++]) != toLower(s[e--])) {
                    return false;
                }
            }
        }
        return true;
    }
};