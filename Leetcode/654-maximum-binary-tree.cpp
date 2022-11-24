//654. Maximum Binary Tree
//Problem Link: https://leetcode.com/problems/maximum-binary-tree/

//Time Complexity:
//Space Complexity:

class Solution {
public:

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        vector<TreeNode*> v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            TreeNode* cur=new TreeNode(nums[i]);
            while(!v.empty() && v.back()->val<nums[i])
            {
                cur->left=v.back();
                v.pop_back();
            }
            if(!v.empty()) v.back()->right=cur;
            v.push_back(cur);
        }
        return v.front();
    }
};