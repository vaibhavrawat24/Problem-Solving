// 2869. Minimum operations to collect elements
// Problem Link: https://leetcode.com/contest/biweekly-contest-114/problems/minimum-operations-to-collect-elements/

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        set<int> val;
        int move = 0;

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            move++;

            if (nums[i] <= k)
                val.insert(nums[i]);

            if (val.size() == k)
                return move;
        }

        return 0;
    }
};