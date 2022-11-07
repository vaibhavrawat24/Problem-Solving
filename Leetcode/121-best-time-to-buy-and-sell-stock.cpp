//121. Best Time to Buy and Sell Stock
//Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//Time Complexity: O(n)
//space Complexity: O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX,res=0;
        
        for(auto it:prices)
        {
            buy=min(it,buy);
            res=max(res,it-buy);
        }
        
        return res;
    }
};