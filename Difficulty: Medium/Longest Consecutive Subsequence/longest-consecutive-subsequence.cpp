class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int cnt = 0;
        int longest = 1;
        int last_smaller = INT_MIN;
        for (int i = 0; i <n;i++){
            if (arr[i]-1 == last_smaller){
                cnt +=1;
                last_smaller = arr[i];
            }
            else if (last_smaller != arr[i]){
                cnt = 1;
                last_smaller = arr[i];
            }
            longest = max (longest,cnt);
        }
        return longest;
    }
};