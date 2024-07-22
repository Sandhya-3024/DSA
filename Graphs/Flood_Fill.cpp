 void dfs(vector<vector<int>>& image,vector<vector<int>>&ans,int inicolor,int newcolor,int delrow[],int delcol[],int row,int col){
       int n=image.size();
        int m=image[0].size();
       ans[row][col]=newcolor;
       for(int i=0;i<4;i++){
           int nrow=row+delrow[i];
           int ncol=col+delcol[i];
           if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && ans[nrow][ncol]!=newcolor && image[nrow][ncol]==inicolor){
               dfs(image,ans,inicolor,newcolor,delrow,delcol,nrow,ncol);
           }
       }
   }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        vector<vector<int>>&ans=image;
        int inicolor=image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,+0,-1};
        dfs(image,ans,inicolor,newcolor,delrow,delcol,sr,sc);
        return ans;
    }
};
