class Solution {
    //Memoization
    long long int mod=1e9+7;
    long long int tdown(int n,vector<long long int>&dp){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=((tdown(n-1,dp)+tdown(n-2,dp))%mod);
    }
    
  public:
    long long int topDown(int n) {
        vector<long long int>dp(n+1,-1);
        return tdown(n,dp);
    }
     //Tabulation
    long long int bottomUp(int n) {
        if(n<=1) return n;
        int prev=1;
        int prev2=0;
        int curr=0;
        for(int i=2;i<=n;i++){
            curr=(prev+prev2)%mod;
            prev2=prev;
            prev=curr;
        }
        return (curr%mod);
    }
};
