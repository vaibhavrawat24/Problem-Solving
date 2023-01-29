//42 Minimum sum partition
//Problem Link: https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1

//Time Complexity: O(n*m)
//Space Complexity: O(n*m)

int minDifference(int arr[], int n)  { 
    int range=accumulate(arr,arr+n,0);
    
    vector<vector<bool>> dp(n+1,vector<bool> (range+1,false));
    
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<range+1;j++)
        {
            if(i==0) dp[i][j]=false;
            if(j==0) dp[i][j]=true;
        }
    }
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<range+1;j++)
        {
            if(arr[i-1]<=j) 
            {
                dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    
    int diff=INT_MAX;
    
    for(int i=range/2;i>=0;i--)
    {
        if(dp[n][i]==true)
        {
            diff=min(diff,range-2*i);   
            
        }
    }
    
    return diff;
} 