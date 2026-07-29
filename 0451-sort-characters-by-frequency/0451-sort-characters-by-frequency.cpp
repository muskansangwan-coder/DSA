class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> counts;

        for(char ch : s){
            counts[ch]++;
        }

       // vector<pair<char,int>> freqVec(freqMap.begin() , freqMap.end());

        sort(s.begin(), s.end(), [&](char a, char b){
            if(counts[a] != counts[b])
                return counts[a] > counts[b];
            return a>b;
        });

        return s;

    }
};