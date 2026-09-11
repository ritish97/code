class Solution {
  public:
  long long sumv(vector<int>&arr){
      int n = arr.size();
      long long sum = 0;
      for(int i = 0;i<arr.size();i++){
          sum+=arr[i];
      }
      return sum;
  }
  long long canwesplit(vector<int>&arr,long long mid,int k){
      int countpainter = 1;
      int countpaint=0;
      for(int j = 0;j<arr.size();j++){
          if(countpaint+arr[j]<=mid){
              countpaint+=arr[j];
          }
          else{
              countpainter++;
              countpaint = arr[j];
          }
      }
      return countpainter;
  }
    int minTime(vector<int>& arr, int k) {
        int m = arr.size();
        if(m<k) return -1;
        long long low = *max_element(arr.begin(),arr.end());
        long long high = sumv(arr);
        while(low<=high){
            int mid = (low+high)/2;
            if(canwesplit(arr,mid,k)<=k) high = mid-1;
            else low = mid+1;
        }
        return low;
        
    }
};