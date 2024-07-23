//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
private:
  
  void dfs(vector<vector<char>> &mat,vector<vector<int>>&vis,int delrow[],int delcol[],int row,int col){
       vis[row][col]=1;
      int n=mat.size();
      int m=mat[0].size();
      for(int i=0;i<4;i++){
          int nrow=row+delrow[i];
          int ncol=col+delcol[i];
          if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol]=='O'){
              dfs(mat,vis,delrow,delcol,nrow,ncol);
          }
          
      }
  }
    
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            if(mat[0][j]=='O'){
                vis[0][j]=1;
                dfs(mat,vis,delrow,delcol,0,j);
            }
            if(mat[n-1][j]=='O'){
                vis[n-1][j]=1;
                dfs(mat,vis,delrow,delcol,n-1,j);
            }
        }
        for(int i=0;i<n;i++){
            if(mat[i][0]=='O'){
                vis[i][0]=1;
                dfs(mat,vis,delrow,delcol,i,0);
            }
            if(mat[i][m-1]=='O'){
                vis[i][m-1]=1;
                dfs(mat,vis,delrow,delcol,i,m-1);
        }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j]=='O'){
                    mat[i][j]='X';
                }
            }
        }
        
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
