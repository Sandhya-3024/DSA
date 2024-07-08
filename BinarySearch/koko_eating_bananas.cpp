class Solution {
public:
  int findmax(vector<int>&piles){
     int maxi=0;
     int n=piles.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,piles[i]);    
    }
    return maxi;
  }
  
  long long findtime(vector<int>&piles,int hrs){
    long long totalhrs=0;
    for(int i=0;i<piles.size();i++){
        totalhrs+=ceil(double(piles[i])/double(hrs));
    }
    return totalhrs;
  }
  
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int maxi=findmax(piles);
        int low=1;
        int high=maxi;
        int ans;
        while(low<=high){
           int mid=(low+high)/2;
          long long reqtime=findtime(piles,mid);
           if(reqtime<=h){
            ans=mid;
            high=mid-1;
           }
           else{
            low=mid+1;
           }
        }
     return ans;
    }
};
