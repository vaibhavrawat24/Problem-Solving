// 268. Missing Number
// Problem Link: https://leetcode.com/problems/missing-number/submissions/

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ans = nums.size();

        for (int i = 0; i < nums.size(); i++)
            ans ^= i ^ nums[i];

        return ans;
    }
};