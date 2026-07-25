class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0 , right = nums.size() - 1 , start = -1 ,end = -1;

        while(left <= right){
            int mid = left + (right - left) / 2;
            int num  = nums[mid];

            if(num > target)
                right = mid - 1;
            else if(num < target)
                left = mid + 1;
            else{
                start = end = mid;
                left = mid - 1;
                while(left >= 0 && nums[left] == num){
                    start = left;
                    left--;
                }
                right = mid + 1;
                while(right < nums.size() && nums[right] == num){
                    end = right;
                    right++;
                }
                break;
            }
        }
        return {start , end};
    }
};