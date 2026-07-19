class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> temp(k);
        for (int i = 0; i < k; i++) {
            // cout << i << " " << n - i - 1 << endl;
            temp[i] = nums[n - k + i];
        }
        for (int i = n-1 ; i >= k ; i--) {
            nums[i] = nums[i - k];
        }
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};