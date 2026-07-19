class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int n = s.size(), st = 0, e = 0, i = 0;

        while (i < n) {
            while (i < n && s[i] == ' ')
                i++;

            if (i == n)
                break;

            while (i < n && s[i] != ' ') {
                s[e++] = s[i++];
            }
            reverse(s.begin() + st, s.begin() + e);
            s[e++] = ' ';
            st = e;
            i++;
        }
        s.resize(e - 1);
        return s;
    }
};