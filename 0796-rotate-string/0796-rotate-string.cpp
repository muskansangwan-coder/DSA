class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
            return false;

        if(s == goal)
            return true;

        s += s;

        string str = s.substr(0 , goal.size());
        int first = 0;

        for(int i = goal.size(); i<s.size();i++){
            str.erase(0 , 1);
            str += s[i];

            if(str == goal)
                return true;
        }
        cout << str;
        return false;
    }
};