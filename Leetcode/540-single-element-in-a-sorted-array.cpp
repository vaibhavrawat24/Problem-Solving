//540. Single Element in a Sorted Array
//Problem Link: https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/902045528/
 
//Time complexity: O(log n)
//Space complexity: O(1)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left=0,right=nums.size()-1,res=0;

        while(left<right)
        {
            int mid=left+(right-left)/2;

            if(mid%2==1) mid--;

            if(nums[mid]!=nums[mid+1]) right=mid;
            else left=mid+2;
        }

        return nums[left];
    }
};