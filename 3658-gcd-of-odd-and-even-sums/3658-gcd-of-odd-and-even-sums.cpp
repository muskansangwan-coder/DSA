class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n * n;
        int sumEven = n * (n + 1);

        int last = min(sumOdd, sumEven);
        int GCD = 1;

        for (int i = 2; i <= last; i++) {
            if (sumOdd % i == 0 && sumEven % i == 0)
                GCD = i;
        }
        return GCD;
    }
};