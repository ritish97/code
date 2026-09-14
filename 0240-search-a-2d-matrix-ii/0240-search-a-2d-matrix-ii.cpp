class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int trow = matrix.size();
        int tcol = matrix[0].size();
        for(int i = 0;i<trow;i++){
            for(int j = 0;j<tcol;j++){
                if(matrix[i][j]==target) return true;
            }
        }
        return false;
    }
};