class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        unordered_set<int>checked;
        for (int i =0 ;i<n;i++){
            if (checked.count(nums[i])) continue;
            checked.insert(nums[i]);
            int count = 1;
            for (int j = i+1; j < n; j++){
                if (nums[j]==nums[i]){
                    count++;
                }
            }
            if (count > n /3){
                ans.push_back(nums[i]);
            }
        }
        return ans;
        
    }
};