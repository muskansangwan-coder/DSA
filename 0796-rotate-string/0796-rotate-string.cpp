class Solution {
public:
    bool rotateString(string s, string goal) {
        
        /*    Time Complexity    ---    O(N)
              Space Complexity   ---    O(N)     */

        
        // if both strings are not of equal length
        if(s.size() != goal.size())
            return false;

        // double s so that it contains all possible rotations
        string doubled = s + s;

        // check if goal is a substring of doubled
        return doubled.find(goal) != string::npos;
    }
};