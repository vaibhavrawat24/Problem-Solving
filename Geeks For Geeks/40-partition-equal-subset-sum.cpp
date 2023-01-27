//40 Partition Equal Subset Sum
//Problem Link: https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1

//Time Complexity: O(n*m)
//Space complexity: O(n*m)

int equalPartition(int N, int arr[])
    {
        int sum=accumulate(arr,arr+N,0);
        
        if(sum%2!=0) return 0;
        
        int part=sum/2;
        
        vector<vector<bool>> dp(N+1,vector<bool>(part+1,false));
        
        for(int i=0;i<N+1;i++)
        {
            for(int j=0;j<part+1;j++)
            {
                if(i==0) dp[i][j]=false;
                if(j==0) dp[i][j]=true;
            }
        }
        
        for(int i=1;i<N+1;i++)
        {
            for(int j=1;j<part+1;j++)
            {
                if(arr[i-1]<=j) dp[i][j]=(dp[i-1][j-arr[i-1]])||dp[i-1][j];
                else dp[i][j]=dp[i-1][j];
            }
        }
        
        return dp[N][part];
    }