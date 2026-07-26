class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "", match = "";
        int size = 200;

        for (string str : strs) {
            if (str.size() < size) {
                size = str.size();
                match = str;
            }
        }
        bool flag = false;
        for (int i = 0; i < size; i++) {
            for (string str : strs) {
                if (str[i] != match[i]) {
                    flag = true;
                }
            }
            if (flag)
                break;
            else
                prefix += match[i];
        }
        return prefix;
    }
};