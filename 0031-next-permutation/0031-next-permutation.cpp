class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1, n = nums.size();

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }

        // if array is in descending order(last permutation)
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // find element greater than pivot element and swap them
        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // reverse reamining array after pivot index
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};