class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = nums[0] , freq = 1;

        for(int i=1;i<nums.size();i++){
            if(freq == 0)
                major = nums[i];

            if(major == nums[i])
                freq++;
            else
                freq--;
        }
        return major;
    }
};