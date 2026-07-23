class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0, count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) {
                count++;
            } else {
                maxOnes = max(maxOnes, count);
                count = 0;
            }
        }
        // if last value of nums is 1
        if (count > 0)
            maxOnes = max(maxOnes, count);

        return maxOnes;
    }
};