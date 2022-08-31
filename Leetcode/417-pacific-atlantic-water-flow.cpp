//417. Pacific Atlantic Water Flow
//Problem Link: https://leetcode.com/problems/pacific-atlantic-water-flow/

//Time Complexity: O(mn)
//Space Complexity: O(mn)

class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<int>> ans;
        vector<vector<bool>> seenP(m,vector<bool> (n,false));
        vector<vector<bool>> seenA(m,vector<bool> (n,false));
        
        for (int i = 0; i < m; ++i) 
        {
            dfs(heights, i, 0, seenP); // perform dfs starting from the left-most column 
            dfs(heights, i, n - 1, seenA); // perform dfs starting from the right-most column 
        }

        for (int j = 0; j < n; ++j) 
        {
            dfs(heights, 0, j, seenP); // perform dfs starting from the top-most row
            dfs(heights, m - 1, j, seenA); // perform dfs starting from the bottom-most row
        }

         // iterate each row
        for (int i = 0; i < m; ++i)
        {
            // iterate each column
            for (int j = 0; j < n; ++j)
            {
                // if both seenP[i][j] & seenA[i][j] are visited
                // that means this cell can flow to both ocean
                if (seenP[i][j] && seenA[i][j])
                {
                    // then put the coordinate (i, j) to answer
                    ans.push_back({i, j});
                }
            }
        }

    return ans;
  }
    
 private:
    void dfs(const vector<vector<int>>& heights, int i, int j,vector<vector<bool>>& seen, int h = 0)
    {
        if (i < 0 || i == heights.size() || j < 0 || j == heights[0].size())
            return;
        if (seen[i][j] || heights[i][j] < h)
            return;

        // marked this cell (i, j) as visited
        // so that we won't visit it again
        seen[i][j] = true;

        // perform DFS on the right cell
        dfs(heights, i + 1, j, seen, heights[i][j]);
        // perform DFS on the left cell
        dfs(heights, i - 1, j, seen, heights[i][j]);
        // perform DFS on the bottom cell
        dfs(heights, i, j + 1, seen, heights[i][j]);
         // perform DFS on the top cell
        dfs(heights, i, j - 1, seen, heights[i][j]);
   }

};