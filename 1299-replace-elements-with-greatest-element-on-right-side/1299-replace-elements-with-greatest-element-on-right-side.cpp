class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size() - 1;
        int leader = arr[n];
        arr[n] = -1;

        for (int i = n - 1; i >= 0; i--) {
            int num = arr[i];
            arr[i] = leader;
            leader = max(leader, num);
        }
        return arr;
    }
};