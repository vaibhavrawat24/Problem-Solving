//122. Best Time to Buy and Sell Stock II
//Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            int a=prices[i-1];
            int b=prices[i];
            if(a<b) profit+=b-a;
         }
        return profit;
        
    }
};