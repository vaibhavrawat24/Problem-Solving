//1018. Binary Prefix Divisible By 5
//Problem Link: https://leetcode.com/problems/binary-prefix-divisible-by-5/

//Time complexity:
//Space Complexity:

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums)
    {
        vector<bool> ans;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            sum*=2;
            if(sum%5==0)
            {
                sum=0;
                ans.push_back(true);
            }
            else
            {
                sum%=5; 
                ans.push_back(false);
            }
        }
        
        return ans;
        
        
    }
};