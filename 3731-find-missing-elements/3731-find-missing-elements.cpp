class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int large = nums[0], small = nums[0], n = nums.size();

        for (int i = 0; i < n; i++) {
            large = max(large, nums[i]);
            small = min(small, nums[i]);
        }

        int count = large - small + 1;
        vector<int> notPresent;

        if (count == n)
            return notPresent;

        vector<bool> checkPresent(count, 0);

        for (int i = 0; i < n; i++) {
            int num = nums[i];
            checkPresent[num - small] = 1;
        }

        for (int i = 0; i < count; i++) {
            if (checkPresent[i] == 0) {
                notPresent.push_back(i + small);
            }
        }
        return notPresent;
    }
};