class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN, mini = INT_MAX;

        // finding minimum and maximum element of nums
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
        }

        int gcd = 1;
        // finding GCD
        for (int i = 2; i <= mini; i++) {
            if (maxi % i == 0 && mini % i == 0)
                gcd = i;
        }
        return gcd;
    }
};