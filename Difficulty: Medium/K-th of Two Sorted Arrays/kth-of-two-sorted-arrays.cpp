class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        vector<int>newarr;
        for(int i = 0;i<a.size();i++){
            newarr.push_back(a[i]);
        }
        for(int j = 0;j<b.size();j++){
            newarr.push_back(b[j]);
        }
        sort(newarr.begin(),newarr.end());
        return newarr[k-1];
        
    }
};