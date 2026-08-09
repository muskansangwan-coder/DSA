class Solution {

private:
    bool isPossible(int mid, vector<int>& piles, int h) {
        long long int hours = 0;

        // calculate no. of hours required for each pile when speed is mid
        for (int i = 0; i < piles.size(); i++) {

            hours += piles[i] / mid + 1;

            if (piles[i] % mid == 0) {
                hours--;
            }
        }

        return hours <= h;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int left = 1, right = 0, n = piles.size(), speed = 0;

        // calculate maximum bananas in pile
        for (int i = 0; i < n; i++) {
            right = max(right, piles[i]);
        }

        // if no. of piles is equal to no. of hours then return maximum bananas
        if (n == h)
            return right;

        // implement binary search between left and right
        while (left <= right) {

            int mid = left + (right - left) / 2;

            // if mid can be a possible speed
            if (isPossible(mid, piles, h)) {
                speed = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return speed;
    }
};