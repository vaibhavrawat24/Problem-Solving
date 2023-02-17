//60. Coin Change
//Problem Link: https://practice.geeksforgeeks.org/problems/coin-change2448/1

//Time complexity: O(n*sum)
//Space complexity: O(n*sum)

class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        vector<vector<long long int>> dp(N+1,vector<long long int> (sum+1,-1));
        
        for(int i=0;i<N+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        
        for(int i=1;i<N+1;i++)
        {
            for(int j=1;j<sum+1;j++)
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
        
        return dp[N][sum];
    }
};