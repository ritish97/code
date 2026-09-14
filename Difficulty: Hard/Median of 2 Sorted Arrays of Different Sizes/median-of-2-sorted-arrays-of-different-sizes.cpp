class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        vector <int> newarr;
        for(int i = 0;i<a.size();i++){
            newarr.push_back(a[i]);
        }
        for(int j = 0;j<b.size();j++){
            newarr.push_back(b[j]);
        }
        sort(newarr.begin(),newarr.end());
        double ans;
        int n = newarr.size();
        int m  = n/2;
        if(n%2==0){
            ans = (newarr[m-1]+newarr[m])/2.0;
        }
        else {
            ans = newarr[m];
        }
        return ans ;
    }
};