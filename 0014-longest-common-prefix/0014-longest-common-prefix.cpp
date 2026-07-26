class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "", match = "";
        int size = 200;

        // find smallest string and its size
        for (string str : strs) {
            if (str.size() < size) {
                size = str.size();
                match = str;
            }
        }

        // use variable to check if they match or not
        bool flag = false;

        // check character of each string at index i
        for (int i = 0; i < size; i++) {
            for (string str : strs) {
                // not match
                if (str[i] != match[i]) {
                    flag = true;
                }
            }
            // if not match no need to check further
            if (flag)
                break;
            // if match add it to prefix string
            else
                prefix += match[i];
        }
        return prefix;
    }
};