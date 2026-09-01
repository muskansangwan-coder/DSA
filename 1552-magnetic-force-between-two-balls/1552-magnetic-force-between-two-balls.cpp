class Solution {
public:
    bool isPossible(vector<int>& nums, int n, int k, int mid){
        int count = 1;
        int lastPos = nums[0];

        for(int i=1; i<n; i++){
            if(nums[i] - lastPos >= mid){
                count++;
                if(count == k)      return true;
                lastPos = nums[i];
            }
        }
        return false;
    }

    int maxDistance(vector<int>& nums, int m) {

        sort(nums.begin() , nums.end());
        int n = nums.size();
        int s=1 , e = nums[n-1] - nums[0];
        int ans = -1;

        while(s<=e){
            int mid = s + (e-s)/2;

            if(isPossible(nums, n, m, mid)){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ans;
    }
};