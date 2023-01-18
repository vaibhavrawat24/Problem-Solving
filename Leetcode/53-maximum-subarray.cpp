//53. Maximum Subarray
//Problem Link: https://leetcode.com/problems/maximum-subarray/description/

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN,n=nums.size(),i=0,j=0;

        while(i<n)
        {
            int sum=0;
            while(j<n)
            {
                sum+=nums[j];
                if(sum>max) max=sum;
                if(nums[j]>sum) break;
                else j+=1;
            }
            i=j;
        }

        return max;  
    }
};