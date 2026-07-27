class Solution {
public:
    bool isIsomorphic(string s, string t) {

        /*    Time Complexity    ---    O(N)
              Space Complexity   ---    O(1)     */


        // if strings are of differnt size , they cannot be isomorphic
        if(s.size() != t.size())
            return false;

        // arrays to track the position where a character was last seen
        int seenS[256] = {0};
        int seenT[256] = {0};

        for (int i=0;i<s.size();i++) {
            // last positions of characters do not match , return false
            if (seenS[s[i]] != seenT[t[i]]) {
                return false;
            }
            // record i + 1 as last position of cahracters in arrays
            seenS[s[i]] = i+1;
            seenT[t[i]] = i+1;
        }

        return true;
    }
};
