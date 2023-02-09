//48. Detect cycle in a directed graph
//Problem Link: https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

//time Complexity: O(V+E)
//Space complexity: O(V)

bool isCycle(int src,vector<bool>& vis,vector<bool>& stack, vector<int> adj[])
{
    stack[src]=true;
    
    if(!vis[src])
    { 
        vis[src]=true;
        for(auto it:adj[src])
        {
            if(!vis[it] && isCycle(it,vis,stack,adj))
            {
                return true;
            }
            if(stack[it]) return true;
        }
    }
    
    stack[src]=false;
    return false;
}

bool isCyclic(int V, vector<int> adj[]) {
    vector<bool> vis(V,false);
    vector<bool> stack(V,false);
    bool isloop=false;
    
    for(int i=0;i<V;i++)
    {
        if(!vis[i] && isCycle(i,vis,stack,adj))
        {
            isloop=true;
        }
    }
    
    if(isloop) return true;
    else return false;
}