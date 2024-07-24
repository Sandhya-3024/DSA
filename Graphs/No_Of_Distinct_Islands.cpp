class Solution {
    private:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>&vis,vector<pair<int,int>>&vec,int row0,int col0,int row,int col){
        int n=grid.size();
        int m=grid[0].size();
        vec.push_back({row-row0,col-col0});
        vis[row][col]=1;
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,-1,0,+1};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                dfs(grid,vis,vec,row0,col0,nrow,ncol);
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                     vector<pair<int,int>>vec;
                    dfs(grid,vis,vec,i,j,i,j);
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
};
