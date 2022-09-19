//1672. Richest Customer Wealth
//Problem Link: https://leetcode.com/problems/richest-customer-wealth/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        for (auto& account : accounts)
        {
            res = max(res, accumulate(account.begin(), account.end(), 0));
        }
        
        return res;
        
    }
};