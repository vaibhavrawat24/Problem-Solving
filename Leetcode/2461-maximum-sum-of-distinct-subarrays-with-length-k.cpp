// 2461. Maximum Sum of Distinct Subarrays With Length K
// Problem Link: https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();

        long long temp = 0, ans = 0;
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
            temp += nums[i];

            if (i >= k)
            {
                mp[nums[i - k]] -= 1;
                temp -= nums[i - k];

                if (mp[nums[i - k]] == 0)
                    mp.erase(nums[i - k]);
            }

            if (mp.size() == k)
                ans = max(ans, temp);
        }

        return ans;
    }
};