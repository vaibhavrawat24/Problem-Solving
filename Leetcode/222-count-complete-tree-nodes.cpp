//222. Count Complete Tree Nodes
//Problem Link: https://leetcode.com/problems/count-complete-tree-nodes/

//Approach 1: Simple traversal

//Time Complexity: O(n)
//Space Complexity: O(h)

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};