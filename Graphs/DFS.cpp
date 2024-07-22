void dfs(int node,vector<int>&ans,vector<int>adj[],int vis[]){
       vis[node]=1;
       ans.push_back(node);
       for(auto it:adj[node]){
           if(!vis[it]){
               dfs(it,ans,adj,vis);
           }
       }
   }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        int start=0;
        vector<int>ans;
        dfs(start,ans,adj,vis);
        return ans;
    }
};
