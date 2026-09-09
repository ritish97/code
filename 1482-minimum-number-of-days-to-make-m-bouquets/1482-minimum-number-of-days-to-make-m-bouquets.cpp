class Solution {
public:
int findmax(vector<int>&bloomDay){
    int maxi = INT_MIN;
    int L = bloomDay.size();
    for (int j =0;j<L;j++){
        if(bloomDay[j]>maxi){
            maxi = max(maxi,bloomDay[j]);
        }
    }
    return maxi;
}
        long long calculateday(vector<int>&bloomDay,int mid, int m , int k){
            int count = 0;
            long long no_of_B = 0;
            int z = bloomDay.size();
            for(int i = 0;i<z;i++){
                if(bloomDay[i]<=mid){
                    count++;
                    if(count==k){
                        no_of_B++;
                        count = 0;
                    }
                }
                else{
                    count = 0;
                }
            }
            return no_of_B;
        }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(1LL*m*k>n) return -1;
        int low = 1, high = findmax(bloomDay);

        while(low<=high){
            int mid =(low+high)/2;
            int ans = calculateday(bloomDay,mid,m,k);
            if(ans>=m){
                high = mid -1;
            }
            else {
                low = mid +1;
            }

            
        }
        return low;
        
    }
};