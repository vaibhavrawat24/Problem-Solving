//75. Sort Colors
//Problem Link: https://leetcode.com/problems/sort-colors/description/

//Time complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();

        int low=0,high=n-1,mid=0;

        while(mid<=high)
        {
            if(nums[mid]==0) swap(nums[low++],nums[mid++]);
            else if(nums[mid]==1) mid++;
            else swap(nums[high--],nums[mid]);
        }
    }
};