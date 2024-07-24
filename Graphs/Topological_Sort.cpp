class Solution
{
    private:
     void dfs(stack<int>&st,vector<int> adj[],int vis[],vector<int>&ans,int node){
          vis[node]=1;
          for(auto it:adj[node]){
              if(!vis[it]){
                  dfs(st,adj,vis,ans,it);
              }
          }
          st.push(node);
     }
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int>st;
	    vector<int>ans;
	    int vis[V]={0};
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(st,adj,vis,ans,i);
	        }
	    }
	     while(!st.empty()){
              ans.push_back(st.top());
              st.pop();
          }
	    return ans;
	}
};
