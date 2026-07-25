class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0 , right = nums.size() - 1 , index = -1;

        while(left <= right){
            int mid = left + (right - left) / 2;
            int num = nums[mid];

            if(num == target){
                index = mid;
                break;
            }
            else{
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
        return index;
    }
};