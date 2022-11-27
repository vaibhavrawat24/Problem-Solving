//213. House Robber II
//Problem Link: https://leetcode.com/problems/house-robber-ii/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp1,temp2;
        
        if(n==1) return nums[0];
        
        for(int i=0;i<n;i++)
        {
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        
        return max(rob2(temp1),rob2(temp2));
    }
    
    int rob2(vector<int>& nums)
    {
        int n=nums.size();
        int prev=nums[0],prev2=0;
        
        for(int i=0;i<n;i++)
        {
            int take=nums[i];
            if(i>1) take+=prev2;
            
            int non_take=0+prev;
            
            int curi=max(take,non_take);
            
            prev2=prev;
            prev=curi;
        }
        
        return prev;
    }
};