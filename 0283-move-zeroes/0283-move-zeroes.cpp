class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int z = nums.size();
        for(int i =0;i<z;i++){
            if (nums[i]!=0)
            temp.push_back(nums[i]);
        }
        int p =temp.size();
        for (int i = 0;i<p;i++){
            nums[i]=temp[i];
        }
        for (int i = p;i<z;i++){
            nums[i]=0;
        }
        
    }
};