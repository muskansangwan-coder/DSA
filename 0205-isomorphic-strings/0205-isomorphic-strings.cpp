class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> vec1;
        vector<int> vec2;
        int count = 1;

        int seenS[256] = {0};
        for (char ch : s) {
            if (seenS[ch] == 0) {
                seenS[ch] = count++;
            }
            count++;
            vec1.push_back(seenS[ch]);
        }

        count = 1;

        int seenT[256] = {0};
        for (char ch : t) {
            if (seenT[ch] == 0) {
                seenT[ch] = count++;
            }
            count++;
            vec2.push_back(seenT[ch]);
        }

        return vec1 == vec2;
    }
};
