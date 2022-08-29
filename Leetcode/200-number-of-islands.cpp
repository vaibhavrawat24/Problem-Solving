//200. Number of Islands
//Problem Link: https://leetcode.com/problems/number-of-islands/

//Time Complexity: O(m*n)
//Space Complexity: 

/*Approach: The basic approach is to traverse through the whole graph and if we have a "1" we will run a dfs or bfs  
            traversal and check if its neighbour is "1" or "0". If all neighbour are "0" then it is an island.
*/

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0 || grid[0].size()==0) return 0;          //if graphs size is 0, return 0
        
        int rows=grid.size(),cols=grid[0].size();                  //store graphs size ie., rows and columns
        int islands=0;                                             //variable that'll store total no. of islands
        vector<vector<bool>> vis(rows,vector<bool> (cols,false));  //blueprint of the original graph to store already visited points
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)                                //iterate through the whole graph and if we find
            {                                                      //a "1" which is not already visited add it to 
                if(grid[i][j]=='1' && !vis[i][j])                  //islands and run dfs to check all its neighbour
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
        if(vis[i][j] || grid[i][j] == '0') return;               //if the point is not "1" we'll return 
        
        vis[i][j] = true;                                        //if the point is "1" we'll add it to visited vector
        dfs(i+1, j, grid, vis);                                  //so we dont count it again as island
        dfs(i, j+1, grid, vis);
        dfs(i-1, j, grid, vis);
        dfs(i, j-1, grid, vis);
        
    }
};