//1351. Count Negative Numbers in a Sorted Matrix
//Problem Link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]<0) ans+=1;
            }
        }
        
        return ans;
        
    }
};