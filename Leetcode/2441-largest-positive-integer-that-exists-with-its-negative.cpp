//2441. Largest Positive Integer That Exists With Its Negative
//Problem Link: https://leetcode.com/contest/weekly-contest-315/problems/largest-positive-integer-that-exists-with-its-negative/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> hehe;
        
        for(auto i:nums) hehe[i]=1;
        
        vector<int> v;
        
        int ans=-1;
        
        for(auto i:nums)
        {
            if(i>0)
            {
                int temp=i*-1;
                if(hehe.find(temp)!=hehe.end())
                {
                    v.push_back(i);
                    ans=max(ans,i);
                }
            }
        }
        return ans;
        
    }
};