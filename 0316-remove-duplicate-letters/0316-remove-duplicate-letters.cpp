class Solution {
public:
    string removeDuplicateLetters(string s) {
         vector<int> lastIndex(26, -1);
        int index = 0;

        // checking last index of characters
        for (char ch : s) {
            lastIndex[ch - 'a'] = index++;
        }

        string str = "";
        vector<bool> seen(26, false);
        index = 0;

        // searching subsequence
        for (char ch : s) {
            // already present
            if (seen[ch - 'a']){
                index++;
                continue;
            }   

            while (!str.empty() && lastIndex[str.back() - 'a'] > index && str.back() > ch) {
                seen[str.back() - 'a'] = false;
                str.pop_back();
            }
            str.push_back(ch);
            seen[ch - 'a'] = true;
            index++;
        }
        return str;
    }
};