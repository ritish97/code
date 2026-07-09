class Solution {
  public:
    bool isPrime(int n) {
        vector<int> result;
        int count = 0;
        for (int i =1 ; i*i<=n;i++){
            if(n%i==0){
                result.push_back(i);
                count+=1;
                if ((n/i)!=i){
                    result.push_back(n/i);
                    count+=1;
                }
            }
        }
        if (count==2) return true;
        else return false;
        
    }
};
