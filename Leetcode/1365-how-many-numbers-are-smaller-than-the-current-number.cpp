//1365. How Many Numbers Are Smaller Than the Current Number
//Problem Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size());
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]<nums[i]) ans[i]++;
            }
        }
        
        return ans;
        
    }
};