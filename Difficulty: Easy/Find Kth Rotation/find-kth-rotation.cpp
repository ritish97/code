class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int mini = INT_MAX;
        int ans = 0;
        for(int i =0;i<n;i++){
            if(arr[i]<mini){
                mini = arr[i];
                ans = i;
            }
            
            
            
        }
        return ans;
    
        
        
    }
};
