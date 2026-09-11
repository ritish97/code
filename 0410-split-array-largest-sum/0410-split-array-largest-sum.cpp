class Solution {
public:
long long sumv(vector<int>&nums){
    int sum = 0;
    for (int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    return sum;
}
long long canweplaced(vector<int>&nums,long long mid,int k){
    int countsplit=1;
    long long sums = 0;
    for (int j = 0;j<nums.size();j++){
        if(sums+nums[j]<=mid){
            sums+=nums[j];
        }
        else{
            countsplit++;
            sums = nums[j];
        }
    }
    return countsplit;
}
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        long long low = *max_element(nums.begin(),nums.end());
        long long high = sumv(nums);
        while (low<=high){
            long long mid = (low+high)/2;
            if(canweplaced(nums,mid,k)<=k) high = mid -1;
            else low = mid +1;
        }
        return low;
        
    }
};