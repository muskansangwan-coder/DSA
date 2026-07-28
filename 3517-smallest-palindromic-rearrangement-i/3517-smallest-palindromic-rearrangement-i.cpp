class Solution {
public:
    string smallestPalindrome(string s) {

        /*    Time Complexity    ---    O(NlogN)
              Space Complexity   ---    O(N)     */

        int n = s.size();
        string str, rev;

        // get first half of string
        int size = n / 2;
        str = s.substr(0, size);

        // sort the first half tp get the lexicographically smallest string
        sort(str.begin(), str.end());

        // reverse the sorted half part to get the remaining part of palindrome string
        rev = str;
        reverse(rev.begin(), rev.end());

        // if size of string is odd add the middle value also
        if (n & 1)
            str = str + s[n / 2] + rev;
        else
            str = str + rev;

        return str;
    }
};