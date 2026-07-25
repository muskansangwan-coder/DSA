class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0 , right = nums.size() - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;
            int num = nums[mid];

            if(num == target){
                return true;
            }
            else{
                while(left <= right && nums[left] == num && nums[right]== num){
                    left++;
                    right--;
                }
                if(left > right)
                    break;
                
                if(nums[left] <= num){   // left sorted
                    if(target >= nums[left] && target < num)
                        right = mid - 1;
                    else
                        left = mid + 1;
                }
                else{   // right sorted
                    if(target > num && target <= nums[right])
                        left = mid + 1;
                    else
                        right = mid - 1;
                }
            }
        }
        return false;
    }
};