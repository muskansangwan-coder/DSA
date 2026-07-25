class Solution {
public:
    int maxProduct(int n) {
        // convert to string
        string str = to_string(n);

        // sort the string
        sort(str.begin(), str.end());

        int s = str.size();
        
        // find last two numbers of the string
        int firstMax = str[s - 1] - '0';
        int secondMax = str[s - 2] - '0';

        return firstMax * secondMax;
    }
};