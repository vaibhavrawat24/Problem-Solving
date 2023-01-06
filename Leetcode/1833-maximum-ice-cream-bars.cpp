//1833. Maximum Ice Cream Bars
//Problem Link: https://leetcode.com/problems/maximum-ice-cream-bars/description/

//Time Complexity: O(n log n)
//Space Complexity: O(n)

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size(),res=0;
        sort(costs.begin(),costs.end());
        
        for(int i=0;i<n;i++)
        {
            if(costs[i]<=coins)
            {
                res+=1;
                coins-=costs[i];
            }
        }

        return res;
    }
};