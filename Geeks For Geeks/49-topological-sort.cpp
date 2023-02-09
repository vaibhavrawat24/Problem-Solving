//49. Topological sort
//Problem Link: https://practice.geeksforgeeks.org/problems/topological-sort/1

//Time complexity: O(V+E)
//Space Complexity: O(V)

public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> indegree(V,0);
	    vector<int> res;
	    
	    for(int i=0;i<V;i++)
	    {
	        for(auto it:adj[i]) indegree[it]++;
	    }
	    
	    queue<int> q;
	    
	    for(int i=0;i<V;i++)
	    {
	        if(indegree[i]==0) q.push(i);
	    }
	    
	    while(!q.empty())
	    {
	        int f=q.front();
	        q.pop();
	        
	        res.push_back(f);
	        
	        for(auto it:adj[f])
	        {
	            indegree[it]--;
	            if(indegree[it]==0) q.push(it);
	        }
	    }
	    
	    return res;
	}