//144. Binary Tree Preorder Traversal
//Problem Link: https://leetcode.com/problems/binary-tree-preorder-traversal/

//Time Complexity: 
//Space Complexity: 

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
    
private:
    void preorder(TreeNode* root,vector<int>& ans)
    {
        if(root==NULL) return;
        
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
};