//Distance of nearest cell having 1
//Problem Link: https://practice.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1

//Time Complexity: O(n*m)
//Space Complexity: O(n*m)

class Solution 
{
    public:
    
    int bfs(int m,int n,vector<vector<int>> res)
    {
        
    }
    
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> vis(n,vector<int>(m,0));
	    vector<vector<int>> dis(n,vector<int> (m,0));
	    queue<pair<pair<int,int> ,int>> q;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(grid[i][j]==1)
	            {
	                q.push({{i,j},0});
	                vis[i][j]=1;
	            }
	            else
	            {
	                vis[i][j]=0;
	            }
	        }
	    }
	    
	    int delrow[]={-1,0,+1,0};
	    int delcol[]={0,+1,0,-1};
	    
	    while(!q.empty())
	    {
	        int row=q.front().first.first;
	        int col=q.front().first.second;
	        int step=q.front().second;
	        q.pop();
	        
	        dis[row][col]=step;
	        
	        for(int i=0;i<4;i++)
	        {
	            int nrow=row+delrow[i];
	            int ncol=col+delcol[i];
	            
	            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0)
	            {
	                vis[nrow][ncol]=1;
	                q.push({{nrow,ncol},step+1});
	            }
	        }
	    }
	   
	   
	   return dis;
	   
	}
};