class Solution {
  public:
    bool isPalindrome(int n) {
        int dup = n;
        int rev = 0;
        while (n!=0){
           
                int ld = n % 10;
                rev = rev * 10 + ld;
                n = n/10;
            
        } 
        if (dup == rev) return true;
        else return false;
    }
};