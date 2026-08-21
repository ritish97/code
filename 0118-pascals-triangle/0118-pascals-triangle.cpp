class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>>ans;
        for (int i =1;i<=n;i++){
            long long Val = 1;
            vector<int>ansRow;
            ansRow.push_back(1);
            for (int col = 1;col<i;col++){
                Val = Val *(i-col);
                Val = Val/col;
                ansRow.push_back(Val);
            }
            ans.push_back(ansRow);
        }
        return ans;
        
    }
};