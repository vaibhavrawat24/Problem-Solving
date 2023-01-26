//37 0 - 1 Knapsack Problem
//Problem Link: https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

//Memoization (Top down)

//Time Complexity: O(n*w)
//Space Complexity: O(n*w) + O(n) (extra stack space for recursion)

class Solution
{
    public:
    
    int solve(int W, int wt[], int val[], int n,vector<vector<int>>& dp)
    {
        if(n==0 || W==0) return 0;
        
        if(dp[n][W]!=-1) return dp[n][W];
       
        if(wt[n-1]<=W)
        {
            return dp[n][W]=max(val[n-1]+solve(W-wt[n-1],wt,val,n-1,dp),solve(W,wt,val,n-1,dp));
        }
        else if(wt[n-1]>W)
        {
            return dp[n][W]=solve(W,wt,val,n-1,dp);
        }
    }
 
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
        
        return solve(W,wt,val,n,dp);
    }
};

//Tabulation (Bottom Up)

//Time Complexity: O(n*w)
//Space Complexity: O(n*w)

int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<W+1;j++)
            {
                if(i==0 || j==0) dp[i][j]=0;
            }
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<W+1;j++)
            {
                
                if(wt[i-1]<=j)
                {
                    dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[n][W];
    }
    