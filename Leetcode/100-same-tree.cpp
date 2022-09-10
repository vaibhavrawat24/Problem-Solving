//100. Same Tree
//Problem Link: https://leetcode.com/problems/same-tree/

//Approach 1: Recursion

//Time Complexity:
//Space Complexity:

class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
       
        if (p == NULL && q == NULL) return true;
        if (p == NULL || q == NULL) return false;
        return (p->val == q->val) && 
            isSameTree(p->left, q->left) && 
            isSameTree(p->right, q->right);
    }
};