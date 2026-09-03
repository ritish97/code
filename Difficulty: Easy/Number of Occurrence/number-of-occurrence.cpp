class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int count=0;
        int n = arr.size();
        int lb = std::lower_bound(arr.begin(),arr.end(),target)-arr.begin();
        int ub = std::upper_bound(arr.begin(),arr.end(),target)-arr.begin();
        if ((lb==n)||arr[lb]!=target){
            count = 0;
        }
        count = ((ub-1)-lb)+1;
        return count;
        
    }
};
