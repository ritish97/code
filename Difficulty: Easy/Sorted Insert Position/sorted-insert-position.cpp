class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        int lb = std::lower_bound(arr.begin(),arr.end(),k)-arr.begin();
        return lb;
    
        
    }
};