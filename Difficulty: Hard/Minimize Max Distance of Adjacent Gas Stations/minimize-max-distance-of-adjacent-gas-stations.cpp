class Solution {
  public:
  int no_of_gasStations(vector<int>&stations,long double dist){
      int cnt  =0 ;
      for (int i = 1;i<stations.size();i++){
          int numberinbet = ((stations[i]-stations[i-1])/dist);
          if((stations[i]-stations[i-1])==numberinbet*dist){
              numberinbet--;
          }
          cnt+=numberinbet;
      }
      return cnt;
  }
    double minMaxDist(vector<int> &stations, int k) {
        int n = stations.size();
        long double low = 0;
        long double high = 0 ;
        for(int i = 0 ; i<n-1;i++){
            high = max(high,(long double)(stations[i+1]-stations[i]));
        }
        long double diff = 1e-6;
        while(high-low>diff){
            long double mid = (low+high)/(2.0);
            int cnt = no_of_gasStations(stations,mid);
            if(cnt>k) low = mid ;
            else high = mid;
        }
        return high;
    }
};