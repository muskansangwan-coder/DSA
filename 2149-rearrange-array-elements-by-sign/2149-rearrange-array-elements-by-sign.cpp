class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        vector<int> result;

        for (int num : nums) {
            if (num > 0)
                pos.push_back(num);
            else
                neg.push_back(num);
        }

        int size = nums.size() / 2;

        for (int i = 0; i < size; i++) {
            result.push_back(pos[i]);
            result.push_back(neg[i]);
        }
        return result;
    }
};