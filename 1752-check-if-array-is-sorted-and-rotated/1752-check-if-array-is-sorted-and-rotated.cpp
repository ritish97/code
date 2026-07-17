class Solution {
public:
    bool check(vector<int>& nums) {
        int mini=nums[0];
        
        int j=1;
        while (j<nums.size() && nums[j-1]<=nums[j]){
            j++;
        }
        while (j<nums.size()){
            if (j+1 <nums.size() && (nums[j]>nums[j+1] || nums[j]>mini)){
                return false;
            }
            if (nums[j]>mini){
            return false;
            }
            
            
         
            j++;
        }
        return true;
    
    }
};