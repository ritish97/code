class Solution {
  public:
  int findmax(vector<int>&arr){
      int n = arr.size();
      int maxi = INT_MIN;
      for(int i =0;i<n;i++){
          if(arr[i]>maxi){
              maxi = max(maxi,arr[i]);
          }
      }
      return maxi;
  }
  long long calculatetotalhours(vector<int>&arr,int hour){
      long long totalh = 0;
      int m = arr.size();
      for(int j = 0;j<m;j++){
          totalh+= ceil((double)arr[j]/(double)hour);
      }
      return totalh;
  }
    int kokoEat(vector<int>& arr, int k) {
        int low = 1,high = findmax(arr);
        while(low<=high){
            int mid = (low+high)/2;
            long long totalh = calculatetotalhours(arr,mid);
            if(totalh<=k){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
        
    }
};