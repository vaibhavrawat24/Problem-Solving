// 229. Majority Element II
// Problem Link: https://leetcode.com/problems/majority-element-ii/description/

// Approach 1

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int mini = nums.size() / 3 + 1;
        unordered_map<int, int> mp;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;

            if (mp[nums[i]] == mini)
                ans.push_back(nums[i]);
        }

        return ans;
    }
};

// Approach 2

// Time Complexity:
// Space Complexity: