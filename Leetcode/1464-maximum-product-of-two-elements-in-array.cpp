//1464. Maximum Product of Two Elements in an Array
//Problem Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        sort(nums.begin(),nums.end());
        
        int ans=(nums[n-1]-1)*(nums[n-2]-1);
        
        return ans;
        
    }
};