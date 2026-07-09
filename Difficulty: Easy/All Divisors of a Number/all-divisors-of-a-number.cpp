class Solution {
  public:
    vector<int> getDivisors(int n) {
        vector<int> result;
        for (long long i=1;i*i<=n;i++){
            if(n%i==0){
                result.push_back(i);
                if ((n/i)!=i){
                    result.push_back(n/i);
                }
            }
        }
        sort(result.begin(),result.end());
        return result;
        
    }
};