class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int totalOnes = 0 , maxZeros = 0;
        int prevZeros = 0 , currZeros = 0;
        bool hasPrev = false;

        // traverse string s for counting ones and making segments of zeros
        for (char ch : s) {
            if (ch == '1') {
                totalOnes++;
                if (currZeros > 0) {
                   if(hasPrev){
                    maxZeros = max(maxZeros , prevZeros + currZeros);
                   }
                   prevZeros = currZeros;
                   currZeros = 0;
                   hasPrev = true;
                }
            } else {
                currZeros++;
            }
        }

        // when last element is zero
        if (currZeros > 0 && hasPrev) 
           maxZeros = max(maxZeros , prevZeros + currZeros);
        

        
        return totalOnes + maxZeros;
    }
};