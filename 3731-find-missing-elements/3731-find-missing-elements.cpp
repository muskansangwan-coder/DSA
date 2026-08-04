class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        /*    Time Complexity    ---    O(N + count)
              Space Complexity   ---    O(count)     */


        int large = nums[0], small = nums[0], n = nums.size();

        // find largest and smallest element of nums to find the range
        for (int i = 0; i < n; i++) {
            large = max(large, nums[i]);
            small = min(small, nums[i]);
        }

        int count = large - small + 1;
        vector<int> notPresent;

        // if all elements are already present
        if (count == n)
            return notPresent;

        vector<bool> checkPresent(count, 0);

        // mark true for all numbers present
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            checkPresent[num - small] = 1;
        }

        // add numbers which are not present
        for (int i = 0; i < count; i++) {
            if (checkPresent[i] == 0) {
                notPresent.push_back(i + small);
            }
        }
        
        return notPresent;
    }
};