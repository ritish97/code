class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        if (arr.empty()) return -1;
        int largest = arr[0];
        for(int i = 1;i<arr.size();i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        int second_largest = -1;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]>second_largest && arr[i]!=largest){
                second_largest = arr[i];
            }
            
        }
        return second_largest;

        
    }
};