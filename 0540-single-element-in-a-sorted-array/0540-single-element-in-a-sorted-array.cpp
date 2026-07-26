class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;
        if (n == 1)
            return nums[0];

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int num = nums[mid];

            if (mid == 0 && num != nums[1])
                return num;
            else if (mid == n - 1 && num != nums[n - 2])
                return num;
            else if (num != nums[mid - 1] && num != nums[mid + 1])
                return num;
            else {
                if (mid % 2) {
                    if (num == nums[mid + 1])
                        right = mid - 1;
                    else
                        left = mid + 1;
                } else {
                    if (num == nums[mid - 1])
                        right = mid - 1;
                    else
                        left = mid + 1;
                }
            }
        }
        return -1;
    }
};