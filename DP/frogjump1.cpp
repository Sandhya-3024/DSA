 //Memoization
   /* int f(int ind,vector<int>&heights,vector<int>&dp){
        if(ind==0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int left=f(ind-1,heights,dp)+abs(heights[ind]-heights[ind-1]);
        int right=INT_MAX;//not gonna happen always
        if(ind>1){
        right=f(ind-2,heights,dp)+abs(heights[ind]-heights[ind-2]);
        }
        return dp[ind]=min(left,right);
    }
    int minimumEnergy(vector<int>& height, int n) {
        vector<int>dp(n+1,-1);
        return f(n-1,height,dp);
    }*/
    
    //Tabulation with space optimization
    int minimumEnergy(vector<int>& height, int n) {
       int prev=0;
       int prev2=0;
       for(int i=1;i<n;i++){
           int left=prev+abs(height[i]-height[i-1]);
           int right=INT_MAX;
           if(i>1){
           right=prev2+abs(height[i]-height[i-2]);
           }
           int curr=min(left,right);
           prev2=prev;
           prev=curr;
       }
       return prev;
    }
    
