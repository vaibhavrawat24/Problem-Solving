//101. Symmetric Tree
//Problem Link: https://leetcode.com/problems/symmetric-tree/description/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return symmetric(root,root);
    }

    bool symmetric(TreeNode* p,TreeNode* q)
    {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        return (p->val==q->val) && symmetric(p->right,q->left) && symmetric(p->left,q->right);
    }
};