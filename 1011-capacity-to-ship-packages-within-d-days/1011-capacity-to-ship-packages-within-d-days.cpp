class Solution {
public:


int sumD(vector<int>weights){
    int sum = 0;
    for(int j = 0;j<weights.size();j++){
        sum+=weights[j];
    }
    return sum;
}
long long calculatedays(vector<int>&weights,int mid, int days){
    int no_of_D = 1;
    int sums = 0;
    for(int k = 0; k<weights.size();k++){
        if(sums+weights[k]<=mid){
            sums+=weights[k];
        }
        else{
            no_of_D++;
            sums =weights[k];

        }
    }
    return no_of_D;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high=sumD(weights);
        while(low<=high){
            int mid = (low+high)/2;
            int daysR = calculatedays(weights,mid,days);
            if (daysR<=days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }

        }
        return low;
        
    }
};