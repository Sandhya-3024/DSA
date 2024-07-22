 vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        int n=edges.size();
        vector<vector<int>>adjlist(V+1);
        for(int i=0;i<n;i++){
        int u=edges[i].first;
        int v=edges[i].second;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
        }
        return adjlist;
    }
};
