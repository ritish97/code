class Solution {
public:
    bool check(vector<int>& nums) {
        int mini=nums[0];
        int maxi=0;
        int i=0;
        int j=1;
        while (j<nums.size() && nums[i]<=nums[j]){
            maxi=nums[j];
            i++;
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