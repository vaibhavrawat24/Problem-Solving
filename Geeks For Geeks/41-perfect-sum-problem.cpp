//41 Perfect Sum Problem
//Problem Link: https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1

//Time Complexity: O(n*m)
//Space Complexity: O(n*m)

#define ll long long
class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
	    ll mod=1e9+7;
	    
        vector<vector<ll>> dp(n+1,vector<ll>(sum+1,0));
        
        dp[0][0]=1;
        for(int j=1;j<sum+1;j++)
        {
            dp[0][j]=0;
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(arr[i-1]<=j) 
                {
                    dp[i][j]=dp[i-1][j-arr[i-1]]%mod+dp[i-1][j]%mod;
                }
                else
                {
                    dp[i][j]=dp[i-1][j]%mod;
                }
            }
        }
        
        return dp[n][sum]%mod;
	}
};