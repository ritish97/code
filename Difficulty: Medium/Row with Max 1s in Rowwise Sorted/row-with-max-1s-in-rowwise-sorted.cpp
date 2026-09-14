class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int trow = arr.size();
        int tcol = arr[0].size();
        int maxcount = 0;
        int ind = -1;
        for(int i = 0;i<trow;i++){
            int count = 0;
            count = tcol - (upper_bound(arr[i].begin(),arr[i].end(),0)-arr[i].begin());
        
            if(count>maxcount){
              maxcount = count;
               ind = i;
            }
        }
        return ind;
    }
};