//200. Number of Islands
//Problem Link: https://leetcode.com/problems/number-of-islands/

//Time Complexity: O(m*n)
//Space Complexity: 

/*Approach: The basic approach is to traverse through the whole graph using bfs or dfs and add the visited islands 
            to a new vector of the same size as original vector
*/

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0 || grid[0].size()==0) return 0;
        
        int rows=grid.size(),cols=grid[0].size();
        int islands=0;
        vector<vector<bool>> vis(rows,vector<bool> (cols,false));
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]=='1' && !vis[i][j])
                {
                    islands++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return islands;
        
        
    }
    
    void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<bool>>& vis)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) return;
        if(vis[i][j] || grid[i][j] == '0') return;
        
        vis[i][j] = true;
        dfs(i+1, j, grid, vis);
        dfs(i, j+1, grid, vis);
        dfs(i-1, j, grid, vis);
        dfs(i, j-1, grid, vis);
        
    }
};