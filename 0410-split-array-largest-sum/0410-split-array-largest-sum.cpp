class Solution {
public:
    int isPossible(vector<int>& nums , int n ,int k ,int mid){
        int count = 1  , sum = 0;

        for(int i=0; i<n; i++){
            if(sum + nums[i]  <= mid){
                sum += nums[i];
            }
            else{
                count++;
                sum = nums[i];
            }
        }
        return count <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int s = 0 , e  = 0 , ans =0;

        for(int i=0; i<n; i++){
            e += nums[i];
            s = max(s , nums[i]);
        }

        while(s <= e){
            int mid = s + (e-s)/2;

            if(isPossible(nums ,n ,k ,mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};