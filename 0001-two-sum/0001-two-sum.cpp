class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // to store original indexes
        vector<pair<int, int>> index;
        for (int i = 0; i < nums.size(); i++) {
            index.push_back({nums[i], i});
        }
        sort(index.begin(), index.end());

        int left = 0, right = index.size() - 1;

        while (left < right) {
            int sum = index[left].first + index[right].first;

            if (sum == target) {
                return { index[left].second , index[right].second };
            } else if (sum < target)
                left++;
            else
                right--;
        }
        return {};
    }
};