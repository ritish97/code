class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int lb = std::lower_bound(arr.begin(),arr.end(),target)- arr.begin();
        return lb;

    }
};
