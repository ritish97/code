class Solution {
  public:
    bool armstrongNumber(int n) {
        int cnt = 0;
        int temp = n;
        while (temp > 0){
            temp = temp/10;
            cnt++;
        }
        
        int sum =0;
        int dup = n; 
        while (n>0){
            int ld = n%10;
            sum = sum + pow(ld,cnt);
            n = n/10;
        }
        if (sum == dup)  return true;
        else return false;
        
    }
};