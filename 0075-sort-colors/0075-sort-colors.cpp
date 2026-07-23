class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0 , mid = 0 , high = nums.size()-1;

        while(mid <= high){
            int num = nums[mid];
            if(num == 0)
                swap(nums[low++] , nums[mid++]);
            else if(num == 1)
                mid++;
            else
                swap(nums[mid] , nums[high--]);
        }
    }
};