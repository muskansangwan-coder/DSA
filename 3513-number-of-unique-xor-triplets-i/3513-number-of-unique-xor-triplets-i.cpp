class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();

        if (n <= 2)
            return n;

        int countBits = 0; // count no of bits in binary form of n
        while (n != 0) {
            countBits++;
            n /= 2;
        }
        int count = pow(2, countBits); // unique XOR is 2 ^ no of bits in n
        return count;
    }
};