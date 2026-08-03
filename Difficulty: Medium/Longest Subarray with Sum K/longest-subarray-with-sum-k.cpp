class Solution {
  public:
    int longestSubarray(vector<int>& arr, long long k) {
        unordered_map <long long, int > mp;
        int n = arr.size();
        long long prefixsum = 0;
        int maxLen = 0;
        for (int i =0 ; i < n ; i++){
            prefixsum += arr[i];

          if (prefixsum == k){
            maxLen =  i+1;
          }
        
          if (mp.find(prefixsum - k) != mp.end()) {
                maxLen = max(maxLen, i - mp[prefixsum - k]);
          }
          if (mp.find(prefixsum) == mp.end()){
              mp[prefixsum] =  i;
          }
        }
        
        return maxLen;
        
    }
        
};