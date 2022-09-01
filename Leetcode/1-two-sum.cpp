//1.Two Sum
//Problem Link: https://leetcode.com/problems/two-sum/

//Time Complexity:
//Space Complexity:

// nums = [2,7,11,15], target = 9

// 2,7,11,15

// 2+7=9
// push 2 to vector ans
// push 7 to vector ans
// return vector ans

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        
        return ans;
    }
};