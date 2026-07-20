class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;

        int count = 1; // 2 only even prime number
        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;

        // only for odd numbers
        for (int i = 3; i * i < n; i += 2) {
            if (prime[i]) {
                for (int j = i * i; j < n; j += 2 * i)
                    prime[j] = false;
            }
        }

        for (int i = 3; i < n; i += 2) {
            if (prime[i])
                count++;
        }
        return count;
    }
};