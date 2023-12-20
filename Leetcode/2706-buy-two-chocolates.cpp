// 2706. Buy Two Chocolates
// Problem Link: https://leetcode.com/problems/buy-two-chocolates/?envType=daily-question&envId=2023-12-20

// Time complexity: O(n log n)
// Space complexity: O(1)

class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        int n = prices.size();

        int ans = 0;
        sort(prices.begin(), prices.end());

        if (n >= 2)
        {
            ans = money - (prices[0] + prices[1]);
        }

        if (ans >= 0)
            return ans;
        else
            return money;
    }
};