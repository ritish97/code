class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        int trow = mat.size();
        int tcol = mat[0].size();
        vector<int>newarr;
        for(int i = 0;i<trow;i++){
            for(int j = 0;j<tcol;j++){
                newarr.push_back(mat[i][j]);
            }
        }
        sort(newarr.begin(),newarr.end());
        int ans = 0;
        int n = newarr.size();
        int m = n/2;
        if(n%2==0){
           ans = (newarr[m-1]+newarr[m])/2;
        }
        else{
            ans = newarr[m];
        }
        return ans;
        
    }
};
