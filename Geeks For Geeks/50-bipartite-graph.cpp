//50. Bipartite Graph
//Problem Link: https://practice.geeksforgeeks.org/problems/bipartite-graph/1

//Time Complexity: O(V+E)
//Space Complexity: O(V)

bool bfs(int s,vector<int> adj[],vector<bool>& vis,vector<bool>& color)
{
    color[s]=0;
    queue<int> q;
    q.push(s);
    vis[s]=true;
    
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        
        for(auto it: adj[temp])
        {
            if(!vis[it])
            {
                q.push(it);
                color[it]=color[temp] xor 1;
                vis[it]=true;
            }
            else if(vis[it] && color[temp]==color[it]) return false;
        }
    }
    
    return true;
}

bool isBipartite(int V, vector<int>adj[]){
    vector<bool> vis(V,false);
    vector<bool> color(V,false);
    
    for(int i=0;i<V;i++)
    {
        if(!vis[i] && !bfs(i,adj,vis,color)) return false;
    }
    
    return true;
}