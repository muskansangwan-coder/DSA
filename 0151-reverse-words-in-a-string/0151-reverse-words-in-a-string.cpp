class Solution {
public:
    string reverseWords(string s) {

        /*    Time Complexity    ---    O(N)
              Space Complexity   ---    O(1)     */

        // reverse the string
        reverse(s.begin(), s.end());

        int index = 0, start = 0;

        for (int i = 0; i < s.size(); i++) {
            // if character is space skip it
            while (i < s.size() && s[i] == ' ') {
                i++;
            }
            // if string ends with space then break
            if (i == s.size())
                break;

            // if character is not space add it to the right index
            while (i < s.size() && s[i] != ' ') {
                s[index++] = s[i++];
            }
            // reverse a word
            reverse(s.begin() + start, s.begin() + index);
            // add space after the word
            s[index] = ' ';
            index++;
            // set starting position of next word to index
            start = index;
        }
        // reduce size by 1 to remove the space added after the last word of the
        // string
        s.resize(index - 1);
        // return original string
        return s;
    }
};