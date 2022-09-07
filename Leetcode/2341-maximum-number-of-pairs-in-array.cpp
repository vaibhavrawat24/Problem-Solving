//2341. Maximum Number of Pairs in Array
//Problem Link: https://leetcode.com/problems/maximum-number-of-pairs-in-array/

//Time Complexity:
//Space complexity:

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> v(101);
        
        for(auto i:nums) 
        {
            v[i]++;
        }
        
        int pairs=0, leftover=0;
        
        for(auto i:v)
        {
            pairs+= i/2;
            leftover+= i%2;
        }
        
        return {pairs,leftover};
        
    }
};
