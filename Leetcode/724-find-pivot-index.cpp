//724. Find Pivot Index
//Problem Link: https://leetcode.com/problems/find-pivot-index/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        const int sum = accumulate(begin(nums), end(nums), 0);
        int prefix = 0;

        for (int i = 0; i < nums.size(); ++i) 
        {
            if (prefix == sum - prefix - nums[i])
                return i;
            prefix += nums[i];
        }

        return -1;
        
    }
};