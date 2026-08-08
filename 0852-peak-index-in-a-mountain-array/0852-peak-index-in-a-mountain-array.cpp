class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        /*    Time Complexity    ---    O(logN)
              Space Complexity   ---    O(1)     */


        int st=1, end = arr.size()-2;

        while(st<end){
            int mid = st + (end-st)/2;

            if(arr[mid] < arr[mid+1]){
                st = mid+1;
            }
            else{
                end=mid;
            }
        }   
        return st;
    }
};