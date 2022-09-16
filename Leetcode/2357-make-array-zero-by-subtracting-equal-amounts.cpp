//2357. Make Array Zero by Subtracting Equal Amounts
//Problem Link: https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        set<int> s;
        for(int i=0;i<nums.size();i++) if(nums[i]!=0) s.insert(nums[i]);
        return s.size();
    }
};