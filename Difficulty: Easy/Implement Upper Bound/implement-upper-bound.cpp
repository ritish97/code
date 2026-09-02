class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int Ub = std::upper_bound(arr.begin(),arr.end(),target)-arr.begin();
        return Ub;
        
    }
};
