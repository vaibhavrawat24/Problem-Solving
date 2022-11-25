//198. House Robber
//Problem Link: https://leetcode.com/problems/house-robber/

//Approach 1: Memoisation (Top-down)

//Time Complexity: O(n)
//Space Complexity: O(n)+O(n) stack space + array space

class Solution {
public:
    int f(int idx,vector<int>& nums,vector<int>& dp)
    {
        if(idx==0) return nums[idx];
        if(idx<0) return 0;
        
        if(dp[idx]!=-1) return dp[idx];
        
        int pick=nums[idx]+f(idx-2,nums,dp);
        int not_pick=0+f(idx-1,nums,dp);
        
        return dp[idx]=max(pick,not_pick);
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        
        return f(n-1,nums,dp);
    }
};


//Approach 2: Tabulation (Bottom-up)

//Time Complexity:
//Space Complexity:

