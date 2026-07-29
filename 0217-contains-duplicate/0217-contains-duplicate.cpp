class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        /*    Time Complexity    ---    O(NlogN)
              Space Complexity   ---    O(1)     */


        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1])
                return true;
        }

        return false;
    }
};