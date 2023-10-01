// 2873. Maximum Value of an Ordered Triplet I
// Problem Link: https://leetcode.com/contest/weekly-contest-365/problems/maximum-value-of-an-ordered-triplet-i/

// Time Complexity: O(n^3)
// Space Complexity: O(1)

class Solution
{
public:
    long long maximumTripletValue(vector<int> &nums)
    {
        long long ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    ans = max(ans, 1ll * (nums[i] - nums[j]) * nums[k]);
                }
            }
        }

        return ans;
    }
};