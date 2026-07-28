class Solution {
public:
    bool isAnagram(string s, string t) {

        /*    Time Complexity    ---    O(N)
              Space Complexity   ---    O(1)     */

        // if length of both strings are not equal
        if (s.size() != t.size()) {
            return false;
        }

        // create array of size 26 to store count of each character
        int count[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            // increment for character of s
            count[s[i] - 'a']++;
            // decrement for character of t
            count[t[i] - 'a']--;
        }

        // check if every count is zero
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }
        return true;
    }
};