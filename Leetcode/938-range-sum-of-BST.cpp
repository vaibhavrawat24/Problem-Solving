//938. Range Sum of BST
//Problem Link: https://leetcode.com/problems/range-sum-of-bst/description/

//Time complexity:
//Space Complexity:

class Solution {
public:
    int ans=0;
    
    int rangeSumBST(TreeNode* root, int low, int high) {
       
        if(root!=NULL)
        {
            if((root->val)<=high && (root->val)>=low)
            {
                ans+=(root->val);
            }
            rangeSumBST(root->left,low,high);
            rangeSumBST(root->right,low,high);
        }
        return ans;
    }
};