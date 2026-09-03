class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int n = arr.size();
        int lb = std::lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        int ub = std::upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        if((lb == n)||arr[lb]!=x){
            return {-1,-1};
        }
        return {lb,ub-1};
        
    }
};