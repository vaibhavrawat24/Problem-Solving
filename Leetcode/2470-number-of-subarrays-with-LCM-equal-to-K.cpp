//2470. Number of Subarrays With LCM Equal to K
//Problem Link: https://leetcode.com/contest/weekly-contest-319/problems/number-of-subarrays-with-lcm-equal-to-k/

//Time Complexity: O(n^2)
//Space Complexity: O(n)

#define ui unsigned int

class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
         ui n=nums.size(),sol=0;
        
         for(int i=0;i<n;i++)
         {
             ui temp=nums[i];
             for(int j=i;j<n;j++)
             {
                 temp=lcm(temp,nums[j]);
                 
                 if(temp==k) sol+=1;
             }
         }
        return sol;
    }
};