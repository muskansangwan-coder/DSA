class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp = 0;
        int rp = height.size() - 1;
        int w , h , currWater;
     
        while(lp<rp){
            w = rp - lp;
            h = min(height[lp] , height[rp]);
            currWater = h * w;
            maxWater = max(maxWater, currWater);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};