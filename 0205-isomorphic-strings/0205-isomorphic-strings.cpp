class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> vec1;
        vector<int> vec2;
        int count = 1;

        // array to check ASCII character appeared in s before or not
        int seenS[256] = {0};

        for (char ch : s) {
            // new character so give it a number and increment count
            if (seenS[ch] == 0) {
                seenS[ch] = count++;
            }
            // add number given to the character in the vector1
            vec1.push_back(seenS[ch]);
        }

        count = 1;

        // array to check ASCII character appeared in t before or not
        int seenT[256] = {0};

        for (char ch : t) {
            // new character so give it a number and increment count
            if (seenT[ch] == 0) {
                seenT[ch] = count++;
            }
             // add number given to the character in the vector2
            vec2.push_back(seenT[ch]);
        }

        // if both vectors are equal , strings are isomorphic
        return vec1 == vec2;
    }
};
