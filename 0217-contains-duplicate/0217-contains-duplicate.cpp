class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int> ans;
        int count = 1;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i + 1 == nums.size()) {
                ans.push_back(count);
                break;
            }
            if (nums[i] == nums[i + 1]) {
                count++;
            } else {
                ans.push_back(count);
                count = 1;
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] > 1)
                return true;
        }
        return false;
    }
};