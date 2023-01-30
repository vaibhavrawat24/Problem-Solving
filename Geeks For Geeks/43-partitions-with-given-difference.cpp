//43 Partitions with Given Difference
//Problem Link: https://practice.geeksforgeeks.org/problems/partitions-with-given-difference/1

//Time Complexity:
//Space Complexity:

int mod=1e9+7;
class Solution {
  public:
    int countPartitions(int n, int d, vector<int>& arr) {
        int range=accumulate(arr.begin(),arr.end(),0);
        
        if((d+range)%2!=0 || range<d|| n==1) return 0;

        int target=(d+range)/2;
    
        vector<vector<int>> dp(n+1,vector<int> (target+1,-1));
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<target+1;j++)
            {
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<target+1;j++)
            {
                if(arr[i-1]<=j) 
                {
                    dp[i][j]=(dp[i-1][j-arr[i-1]]+dp[i-1][j])%mod;
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
      
        return dp[n][target];
    }
};