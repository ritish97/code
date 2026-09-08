class Solution {
  public:
    int nthRoot(int n, int m) {
        if (m==0) return 0;
    

                for (int i = 1; i <= m; i++) {

                    long long value = 1;

                    for (int j = 1; j <= n; j++) {
                        value *= i;

                        if (value > m)
                            break;
                    }

                    if (value == m)
                        return i;

                    if (value > m)
                        break;
                }

                return -1;
            
        
    }
};