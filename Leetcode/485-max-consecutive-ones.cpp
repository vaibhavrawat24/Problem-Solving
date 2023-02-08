//485. Max Consecutive Ones
//Problem Link: https://leetcode.com/problems/max-consecutive-ones/description/

//Time complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,temp=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) 
            {
                temp+=1;
                ans=max(ans,temp);
            }
            else
            {
                temp=0;
            }
        }

        return ans;
    }
};