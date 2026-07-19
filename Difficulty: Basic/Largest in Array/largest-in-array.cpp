class Solution {
  public:
    int largest(vector<int> &arr) {
        int maximum = arr[0];
        for(int i = 1;i< arr.size();i++){
            if(arr[i]>maximum) maximum = arr[i];
        }
        return maximum;
        
        
    }
};
