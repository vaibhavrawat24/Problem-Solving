//814. Binary Tree Pruning
//Problem link: https://leetcode.com/problems/binary-tree-pruning/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root==NULL) return root;
        
        root->left=pruneTree(root->left);
        //root->left=left;
        root->right=pruneTree(root->right);
        //root->right=right;
        
        if(root->val==0 && root->left==NULL && root->right==NULL)
            root=NULL;
        
        return root;
        
    }
};