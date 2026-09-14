class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int trow = mat.size();
        int tcol = mat[0].size();
        for(int i = 0;i<trow;i++){
            for(int j = 0;j<tcol;j++){
                if(mat[i][j]==x) return true;
            }
        }
        return false;
        
    }
};