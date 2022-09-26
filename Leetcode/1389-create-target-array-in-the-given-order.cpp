//1389. Create Target Array in the Given Order
//Problem Link: https://leetcode.com/problems/create-target-array-in-the-given-order/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int ind=index[i];
            int val=nums[i];
            ans.insert(ans.begin()+ind,val);
        }
        
        return ans;
        
    }
};