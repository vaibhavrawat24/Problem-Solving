//1920. Build Array from Permutation
//Problem Link: https://leetcode.com/problems/build-array-from-permutation/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=nums[nums[i]];
        }
        
        return ans;
    }
};