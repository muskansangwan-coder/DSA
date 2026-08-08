class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        /*    Time Complexity    ---    O(N)
              Space Complexity   ---    O(1)     */

              
        int sum=0;

        for(int val : nums){
            sum += val;
        }

        int lsum=0 , rsum=sum;

        for(int i=0; i<nums.size(); i++){
            rsum -= nums[i];
            if(lsum == rsum)    return i;
            lsum += nums[i];  
        }
        return -1;
    }
};