//518. Coin Change II
//Problem Link: https://leetcode.com/problems/coin-change-ii/description/

//Time complexity: O(n*amount)
//Space complexity: O(n*amount)

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();

        vector<vector<int>> dp(n+1,vector<int> (amount+1,-1));

        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }

        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<amount+1;j++)
            {
                if(coins[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }

        return dp[n][amount];
    }
};