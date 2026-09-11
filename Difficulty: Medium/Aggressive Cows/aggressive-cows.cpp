class Solution {
  public:
  bool canweplaced(vector<int>&arr,int mid,int k){
      int countcows = 1;
      int last = arr[0];
      for(int i = 1;i<arr.size();i++){
          if(arr[i]-last>=mid){
              countcows++;
              last = arr[i];
          }
          if(countcows>=k) return true;
      }
      return false;
  }
    int aggressiveCows(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int low = 1,high = arr[n-1]-arr[0];
        while(low<=high){
            int mid = (low+high)/2;
            if(canweplaced(arr,mid,k)==true){
                low = mid +1;
            }
            else high = mid -1;
        }
        return high;
        
    }
};