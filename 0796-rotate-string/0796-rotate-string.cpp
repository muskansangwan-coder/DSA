class Solution {
public:
    bool rotateString(string s, string goal) {

        /*    Time Complexity    ---    O(N ^ 2)
              Space Complexity   ---    O(N)     */


        // if both strings are not of equal sizes      
        if (s.size() != goal.size())
            return false;

        // if both strings are same
        if (s == goal)
            return true;

        // double the string so that it contains all roatations
        s += s;

        // create window of size of string
        string str = s.substr(0, goal.size());

        // use sliding window and match every window with goal
        for (int i = goal.size(); i < s.size(); i++) {
            // delete previous character
            str.erase(0, 1);
            // add new character
            str += s[i];

            // match strings
            if (str == goal)
                return true;
        }
        return false;
    }
};