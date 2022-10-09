//2433. Find The Original Array of Prefix Xor
//Problem Link: https://leetcode.com/contest/weekly-contest-314/problems/find-the-original-array-of-prefix-xor/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans(pref.size());
        
        ans[0]=pref[0];
        for(int i=1;i<pref.size();i++)
        {
            ans[i]=pref[i]^pref[i-1];
        }
        return ans;
    }
};