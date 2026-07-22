class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int totalOnes = 0;
        vector<int> zeros;
        int countZeros = 0;

        // traverse string s for counting ones and making segments of zeros
        for (char ch : s) {
            if (ch == '1') {
                totalOnes++;
                if (countZeros > 0) {
                    zeros.push_back(countZeros);
                    countZeros = 0;
                }
            } else {
                countZeros++;
            }
        }

        // when last element is zero
        if (countZeros > 0) 
            zeros.push_back(countZeros);
        

        int maxZeros = 0;
        // checking max value of two continuous segments of zeros
        if (zeros.size() >= 2){
            for(int i = 1 ; i<zeros.size(); i++){
                maxZeros = max(maxZeros , zeros[i-1] + zeros[i]);
            }
        }
        return totalOnes + maxZeros;
    }
};