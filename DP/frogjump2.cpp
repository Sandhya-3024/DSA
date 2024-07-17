//Memoization
  /*int mem(vector<int>&height,int ind,int k,vector<int>&dp){
     
      if(ind==0) return 0;
       if(dp[ind]!=-1) return dp[ind];
        int minsteps=INT_MAX;
        for(int j=1;j<=k;j++){
        if(ind-j>=0){
         int jump=mem(height,ind-j,k,dp)+abs(height[ind]-height[ind-j]);
           minsteps=min(minsteps,jump);
        }
        }
     
     return dp[ind]=minsteps;
    }
  
    int minimizeCost(vector<int>& height, int n, int k) {
        // Code here
        vector<int>dp(n,-1);
       return mem(height,n-1,k,dp);
    }*/
    //Tabulation
     int minimizeCost(vector<int>& height, int n, int k) {
         vector<int>dp(n+1,-1);
         dp[0]=0;
         for(int i=1;i<n;i++){
          int minsteps=INT_MAX;
          for(int j=1;j<=k;j++){
             if(i-j>=0){
             int jump=dp[i-j]+abs(height[i]-height[i-j]);
             minsteps=min(minsteps,jump);
             }
          
         }
           dp[i]=minsteps;
         }
        
         return dp[n-1];
     }
     
