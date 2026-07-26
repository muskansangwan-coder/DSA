class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        // find three largest numbers
        int max1 = nums[n - 1];
        int max2 = nums[n - 2];
        int max3 = nums[n - 3];

        // find two smallest numbers
        int min1 = nums[0];
        int min2 = nums[1];

        int result = max(max1 * max2 * max3, max1 * min1 * min2);
        return result;
    }
};