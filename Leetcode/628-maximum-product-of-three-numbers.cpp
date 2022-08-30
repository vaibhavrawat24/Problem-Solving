//628. Maximum Product of Three Numbers
//Problem link: https://leetcode.com/problems/maximum-product-of-three-numbers/

//Time Complexity: O(n log n)
//Space Complexity: O(1)

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return max(nums[n - 1] * nums[0] * nums[1],
               nums[n - 1] * nums[n - 2] * nums[n - 3]);
        
    }
};