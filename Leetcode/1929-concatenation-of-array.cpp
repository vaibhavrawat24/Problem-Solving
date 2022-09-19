//1929. Concatenation of Array
//Problem Link: https://leetcode.com/problems/concatenation-of-array/

//Time Complexity:
//Space complexity:

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        
        // for(int i=0;i<nums.size();i++)
        // {
        //     ans.push_back(nums[i]);
        // }
        
        ans=nums;
        
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }
        
        return ans;
    }
};