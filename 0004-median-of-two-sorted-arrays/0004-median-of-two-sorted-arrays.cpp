class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>newarr;
        for (int i = 0;i<nums1.size();i++){
                newarr.push_back(nums1[i]);
        }
        for(int j = 0;j<nums2.size();j++){
                newarr.push_back(nums2[j]);
        }
        sort(newarr.begin(),newarr.end());
        int n = newarr.size();
        double ans ;
        int m = n/2;
        if((n%2)==0) {
            ans = (newarr[m-1]+newarr[m])/2.0;
        }
        else{
            ans = newarr[m];
        }
        return ans;

    }
};