//494. Target Sum
//Problem Link: https://leetcode.com/problems/target-sum/description/

//Time complexity:
//Space Complexity:

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();

        int range=accumulate(nums.begin(),nums.end(),0);
        
        if((target+range)%2!=0 || range<target) return 0;

        int mid=(range-target)/2;
    
        vector<vector<int>> dp(n+1,vector<int> (mid+1,-1));
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<mid+1;j++)
            {
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<mid+1;j++)
            {
                if(nums[i-1]<=j) 
                {
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
      
        return dp[n][mid];
    }
};