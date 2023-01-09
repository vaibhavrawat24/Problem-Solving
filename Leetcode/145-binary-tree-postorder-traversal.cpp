//145. Binary Tree Postorder Traversal
//Problem Link: https://leetcode.com/problems/binary-tree-postorder-traversal/description/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root,ans);

        return ans;
    }

    void postorder(TreeNode* root,vector<int>& ans)
    {
        if(root==NULL) return;

        postorder(root->left,ans);
        postorder(root->right,ans);
        ans.push_back(root->val);
    }
};