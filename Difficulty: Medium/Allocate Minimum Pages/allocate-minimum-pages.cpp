class Solution {
  public:
  long long sumv(vector<int>&arr){
      int n = arr.size();
      long long sum = 0;
      for (int i = 0;i<n;i++){
          sum+=arr[i];
      }
      return sum;
  }
  long long canweplaced(vector<int>&arr,long long mid,int k){
      long long countstudent = 1;
      long long sumpages = 0;
      for (int j = 0;j<arr.size();j++){
          if (sumpages+arr[j]<=mid){
              sumpages+=arr[j];
          }
          else{
              countstudent++;
              sumpages = arr[j];
          }
      }
      return countstudent;
  }
    int findPages(vector<int> &arr, int k) {
        int m = arr.size();
        if (m<k) return -1;
        long long low = *max_element(arr.begin(),arr.end());
        long long high = sumv(arr);
        while(low<=high){
            long long mid = (low+high)/2;
            if(canweplaced(arr,mid,k)<=k) high  = mid -1;
            else low = mid +1;
        }
        return low;
        
    }
};