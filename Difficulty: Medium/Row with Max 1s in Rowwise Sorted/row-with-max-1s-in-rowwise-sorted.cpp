class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int trow = arr.size();
        int tcol = arr[0].size();
        int maxcount = 0;
        int ans = -1;
        for(int i = 0;i<trow;i++){
            int count = 0;
            for (int j = 0;j<tcol;j++){
                if(arr[i][j]==1) count++;
            }
            if(count>maxcount){
                maxcount = count ;
                ans = i;
            }
            
        }
        return ans;
    }
};