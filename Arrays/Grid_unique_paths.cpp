class Solution {
private:   
    /*int countpaths(int n,int m,int i,int j){
        if(i==n-1 && j==m-1) return 1;
        if(i>=n || j>=m) return 0;
        else return countpaths(n,m,i+1,j) + countpaths(n,m,i,j+1);
    }*/

    int countpaths(int n,int m,int i,int j,vector<vector<int>>&dp){
        if(i==n-1 && j==m-1) return 1;
        if(i>=n || j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        else return dp[i][j]=countpaths(n,m,i+1,j,dp) + countpaths(n,m,i,j+1,dp);
    }
 
public:
    int uniquePaths(int m, int n) {
        // return countpaths(n,m,0,0);
         if(n==1 && m==1) return 1;
         
        vector<vector<int>>dp(n,vector<int>(m,-1));
        countpaths(n,m,0,0,dp);
        return dp[0][0];
    }
};
