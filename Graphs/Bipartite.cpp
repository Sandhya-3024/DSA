class Solution {
private:
    //Commented Part-BFS
    bool check(vector<int>adj[],int color[],int start){
       
      /* queue<int>q;
        q.push(start);
        color[start]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                
                if(color[it]==-1){
                    color[it]=!color[node];
                    q.push(it);
                }
                else if(color[it]==color[node]){
                        return false;
                    }
                }
            }
       return true;
    }*/
    for(auto it:adj[start]){
        if(color[it]==-1){
            color[it]=!color[start];
            if(check(adj,color,it)==false) return false;
        }
        else if(color[it]==color[start]){
            return false;
        }
    }
    return true;
    }
    
    
public:

	bool isBipartite(int V, vector<int>adj[]){
	   /* int color[V];
	    for(int i=0;i<V;i++){
	          color[i]=-1;
	    }
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	        if(check(adj,color,i)==false){
	            return false;
	        }
	    }
	    }
	    return true;*/
	    int color[V];
	      for(int i=0;i<V;i++){
	          color[i]=-1;
	    }
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	        if(check(adj,color,i)==false){
	            return false;
	        }
	    }
	    }
	    return true;
	    
	}
};
