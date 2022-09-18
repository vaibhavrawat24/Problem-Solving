//1512. Number of Good Pairs
//Problem Link: https://leetcode.com/problems/number-of-good-pairs/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j]) count+=1;
            }
        }
        
        return count;
    }
};