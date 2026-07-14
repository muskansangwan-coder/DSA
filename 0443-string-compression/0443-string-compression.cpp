class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        int count = 1 , index = 0;

        for (int i = 0; i < chars.size(); i++) {
            if (count == 1) {
                ans.push_back(chars[i]);
                index++;
            }
            if (i != chars.size() - 1 && chars[i] == chars[i + 1])
                count++;

            else {
                if (count > 1) {
                    int st = index;
                    while (count != 0) {
                        int rem = count % 10;
                        ans.push_back(rem + '0');
                        index++;
                        count /= 10;
                    }
                    reverse(ans.begin()+st , ans.begin()+index);
                }
                count = 1;
            }
        }
        chars = ans;
        return ans.size();
    }
};