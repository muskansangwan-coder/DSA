class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 , num2 , count1=0 , count2 = 0;

        for(int num : nums){
            if(num == num1)
                count1++;
            else if(num == num2)
                count2++;
            else if(count1 == 0){
                num1 = num;
                count1 =1;
            }
            else if(count2 == 0){
                num2 = num;
                count2 =1;
            }
            else{
                count1--;
                count2--;
            }
        }

        count1 = 0 ,count2 = 0;
        // counting actual count of num1 and num2
        for(int num : nums){
            if(num == num1)
                count1++;
            else if(num == num2)
                count2++;
        }

        int n = nums.size()/3;

        // checking if they meet the requirement
        if(count1 > n && count2 >n) 
            return {num1 ,num2};
        else if(count1 > n)
            return {num1};
        else if(count2 > n)
            return {num2};

        return {};
    }
};