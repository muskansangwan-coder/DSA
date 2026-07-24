class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> one, two, three;

        for (int x : nums) {
            one.insert(x);

            vector<int> num2(one.begin(), one.end());
            for (int y : num2) {
                two.insert(y ^ x);
            }

            vector<int> num3(two.begin(), two.end());
            for (int z : num3) {
                three.insert(z ^ x);
            }
        }
        return three.size();
    }
};