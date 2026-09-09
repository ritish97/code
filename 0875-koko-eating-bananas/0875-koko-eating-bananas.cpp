class Solution {
public:
int findmax(vector<int>&piles){
    int maxi = INT_MIN;
    int n = piles.size();
    for(int i = 0;i<n;i++){
        if(piles[i]>maxi){
            maxi = max(maxi,piles[i]);
        }

    }
    return maxi;
}
long long calculatetotalhours(vector<int>&piles,int hour){
    int m = piles.size();
    long long totalh = 0;
    for(int j = 0;j<m;j++){
        totalh += ceil((double)piles[j]/(double)hour);

    }
    return totalh;

}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1,high =findmax(piles);
        while(low<=high){
            int mid = (low+high)/2;
            long long totalh = calculatetotalhours(piles,mid);
            if(totalh<=h){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return low;
        
    }
};