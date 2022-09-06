//2352. Equal Row and Column Pairs
//Problem Link: https://leetcode.com/problems/equal-row-and-column-pairs/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        const int n = grid.size();
        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j) 
            {
                int k = 0;
                for (; k < n; ++k)
                {
                    if (grid[i][k] != grid[k][j])
                    {
                        break;
                    }
                }
            if (k == n)
            {
                ans++;
            }
            }
        }

    return ans;
        
    }
};