class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            int num = nums[mid];

            if (mid == 0 && num > nums[mid + 1])
                return mid;
            else if (mid == n - 1 && num > nums[n - 2])
                return mid;
            else if (num > nums[mid + 1] && num > nums[mid - 1])
                return mid;
            else if (num < nums[mid + 1])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
};