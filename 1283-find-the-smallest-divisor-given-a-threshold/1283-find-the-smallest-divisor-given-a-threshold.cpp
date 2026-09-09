class Solution {
public:
int findmax(vector<int>&nums){
    int maxi = INT_MIN;
    int m = nums.size();
    for(int i = 0;i<m;i++){
        if(nums[i]>maxi){
            maxi = max(nums[i],maxi);
        }

    }
    return maxi;
}
long long calculateSD(vector<int>nums,int mid,int threshold){
    int n = nums.size();
    long long ans = 0;
    for(int j = 0;j<n;j++){
        ans += ceil((double)nums[j]/(double)mid);
    }
    return ans;

}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1,high = findmax(nums);
        while(low<=high){
            int mid = (low+high)/2;
            int SD = calculateSD(nums,mid,threshold);
            if(SD<=threshold){
                high = mid-1;
            }
            else{
                low = mid +1;
            }

        }
        return low;
        
    }
};