class Solution {
public:
    bool checkEqual(int counts1[26], int counts2[26]) {
        for (int i = 0; i < 26; i++) {
            if (counts1[i] != counts2[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int counts1[26] = {0}, counts2[26] = {0};
        int m = s1.length(), n = s2.length();

        if (m > n)
            return false;

        int index;

        for (int i = 0; i < m; i++) {
            int index = s1[i] - 'a';
            counts1[index]++;
        }

        // first window
        int i = 0;
        while (i < m) {
            index = s2[i] - 'a';
            counts2[index]++;
            i++;
        }

        if (checkEqual(counts1, counts2))
            return true;

        // next window
        while (i < n) {
            index = s2[i] - 'a';
            counts2[index]++;
            
            index = s2[i - m] - 'a';
            counts2[index]--;

            if (checkEqual(counts1, counts2))
                return true;
            i++;
        }
        return false;
    }
};