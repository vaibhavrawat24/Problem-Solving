//94. Binary Tree Inorder Traversal
//Problem Link: https://leetcode.com/problems/binary-tree-inorder-traversal/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> v;
        inorder(root,v);
        return v;
    }
    
    void inorder(TreeNode* root,vector<int>& v)
    {
        if(root!=NULL)
        {       
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
    }
};