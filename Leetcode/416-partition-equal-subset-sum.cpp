//416. Partition Equal Subset Sum
//Problem Link: https://leetcode.com/problems/partition-equal-subset-sum/description/

//Time Complexity: O(n*m)
//Space Complexity: O(n*m)

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);

        if(sum%2!=0) return false;

        int n=nums.size(),part=sum/2;

        vector<vector<bool>> dp(n+1,vector<bool>(part+1,false));

        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<part+1;j++)
            {
                if(i==0) dp[i][j]=false;
                if(j==0) dp[i][j]=true;
            }
        }

        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<part+1;j++)
            {
                if(nums[i-1]<=j) dp[i][j]=(dp[i-1][j-nums[i-1]])||(dp[i-1][j]);
                else dp[i][j]=dp[i-1][j];
            }
        }

        return dp[n][part];
    }
};