//62. Unique Paths in a Grid
//Problem Link: https://practice.geeksforgeeks.org/problems/96161dfced02d544fc70c71d09b7a616fe726085/1

//Time Complexity:
//Space complexity:

class Solution {
  public:
    int mod=1e9+7;
    vector<vector<int>>dp;
    int solve(int i,int j,int n,int m,vector<vector<int>>&grid){
        if(i>=n||j>=m||grid[i][j]==0)return 0;
        if(i==n-1&&j==m-1)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        grid[i][j]=0;
        int ans=solve(i+1,j,n,m,grid)%mod;
        ans=(ans%mod+solve(i,j+1,n,m,grid)%mod)%mod;
        grid[i][j]=1;
        return dp[i][j]=ans;
    }
    
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        dp=vector<vector<int>>(n,vector<int>(m,-1));
        return solve(0,0,n,m,grid);
    }
};