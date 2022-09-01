//226. Invert Binary Tree
//Problem Link: https://leetcode.com/problems/invert-binary-tree/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL)) return root;
        
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        
        invertTree(root->left);
        invertTree(root->right);
        
        return root;    
        
        
    }
};