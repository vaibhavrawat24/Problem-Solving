//47. Detect cycle in an undirected graph
//Problem Link: https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

//Time Complexity: O(V+E)
//Space complexity: O(V)

bool dfs(int src,vector<bool>& vis,vector<int> adj[],int parent)
    {
        vis[src]=true;
        
        for(auto it: adj[src])
        {
            if(it!=parent)
            {
                if(vis[it]) return true;
                if(!vis[it] && dfs(it,vis,adj,src)) return true;
            }
        }
        
        return false;
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> vis(V,false);
        bool isloop=false;
        
        for(int i=1;i<V;i++)
        {
            if(!vis[i] && dfs(i,vis,adj,-1)) isloop=true;
        }
        
        if(isloop) return true;
        else return false;
    }