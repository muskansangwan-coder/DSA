class Solution {
public:
    int romanToInt(string s) {

        /*    Time Complexity    ---    O(N)
              Space Complexity   ---    O(1)     */

        // cretae a map to store value of roman alphabets
        unordered_map<char, int> roman = {
            {'I', 1},   {'V', 5},   {'X', 10},
            {'L', 50},  {'C', 100}, {'D', 500},
            {'M', 1000}};

        int n = s.size();
        // initialize number with last character of s
        int number = roman[s[n - 1]];

        for (int i = n - 2; i >= 0; i--) {
            // if current value is less than the next value
            if (roman[s[i]] < roman[s[i + 1]]) {
                number -= roman[s[i]];
            } else {
                number += roman[s[i]];
            }
        }
        return number;
    }
};