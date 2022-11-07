//746. Min Cost Climbing Stairs
//Problem Link: https://leetcode.com/problems/min-cost-climbing-stairs/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> minCost(n+1,0);
        // minCost[0]=cost[0];
        // minCost[1]=cost[1];
      
        for(int i=2; i<n+1; i++)
        {
            minCost[i] = min((cost[i-1]+minCost[i-1]),cost[i-2]+minCost[i-2]);
        }
        
        return minCost[n];
        
    }
};