// 2870. Minimum Number of Operations to Make Array Empty
// Problem Link: https://leetcode.com/contest/biweekly-contest-114/problems/minimum-number-of-operations-to-make-array-empty/

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        if (nums.size() == 1)
            return -1;

        int ans = 0;

        unordered_map<int, int> mp;

        for (auto it : nums)
            mp[it]++;

        for (auto it : mp)
        {
            if (it.second == 1)
                return -1;

            ans += it.second / 3;
            if (it.second % 3 != 0)
                ans += 1;
        }

        return ans;
    }
};