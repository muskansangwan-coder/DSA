class Solution {
public:
    int minimumPushes(string word) {
        vector<int> count(26);

        for (char ch : word) {
            count[ch - 'a']++;
        }

        sort(count.begin(), count.end());
        reverse(count.begin(), count.end());
        int pushes = 0;

        for (int i = 0; i < 26 && count[i] != 0; i++) {
            int val = count[i];
            if (i < 8) {
                pushes += val;
            } else if (i < 16) {
                pushes += val * 2;
            } else if (i < 24) {
                pushes += val * 3;
            } else {
                pushes += val * 4;
            }
        }
        return pushes;
    }
};