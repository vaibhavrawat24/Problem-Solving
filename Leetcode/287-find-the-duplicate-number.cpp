// 287. Find the Duplicate Number
// Problem Link: https://leetcode.com/problems/find-the-duplicate-number/description/

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int hare = nums[0];
        int tortoise = nums[0];

        do
        {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        tortoise = nums[0];

        while (tortoise != hare)
        {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return tortoise;
    }
};