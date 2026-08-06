class Solution {
public:
    int smallestNumber(int n, int t) {
     
        /*    Time Complexity    ---    O(log10(N))
              Space Complexity   ---    O(1)     */


        while(true){
            int prod = 1 , temp = n;
            // find the prduct of digits
            while(temp){
                int digit = temp % 10;
                prod *= digit;
                temp /= 10;
            }

            // return n if prod divisible by t
            if(prod % t == 0)
                return n;

            // increment the number
            n++;
        }    
    }
};