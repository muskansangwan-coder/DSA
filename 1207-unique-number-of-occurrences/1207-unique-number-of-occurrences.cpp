class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int count=1;
        sort(arr.begin() , arr.end());

        for(int i=0; i<arr.size(); i++){
            if(i+1==arr.size()){
                ans.push_back(count);
                break;
            }
            if(arr[i]==arr[i+1]){
                count++;
            }
            else{
                ans.push_back(count);
                count=1;
            }
        }

        sort(ans.begin() , ans.end());
        for(int i=0; i<(ans.size()-1); i++){
            if(ans[i]==ans[i+1])    return false;
        }
        return true;
    }
};