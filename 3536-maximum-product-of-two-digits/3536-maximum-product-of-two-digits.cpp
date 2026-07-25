class Solution {
public:
    int maxProduct(int n) { 
        string str = to_string(n) ;
        sort(str.begin() , str.end());
        int s = str.size();
        int firstMax = str[s-1] - '0'; 
        int secondMax = str[s-2] - '0'; 

        return firstMax * secondMax;
    }
};