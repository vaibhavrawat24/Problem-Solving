//38 Subset Sum Problem
//Problem Link: https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1

//Time Complexity: O(n*m)
//Space Complexity: O(n*m)

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n=arr.size();
        vector<vector<bool>> dp(n+1,vector<bool> (sum+1,true));
        //bool dp[n+1][sum+1];
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0) dp[i][j]=false;
                if(j==0) dp[i][j]=true;
            }
        }
        
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j) dp[i][j]=(dp[i-1][j-arr[i-1]])||(dp[i-1][j]);
                else dp[i][j]=dp[i-1][j];
            }
        }
        
        return dp[n][sum];
    }
};