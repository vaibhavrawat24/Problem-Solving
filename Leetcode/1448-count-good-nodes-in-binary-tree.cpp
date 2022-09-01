//1448. Count Good Nodes in Binary Tree
//Problem Link: https://leetcode.com/problems/count-good-nodes-in-binary-tree/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int goodNodes(TreeNode* root) {
        if(root==NULL) return 0;
        
        return dfs(root,root->val);
    }
    
    int dfs(TreeNode* root,int maxx)
    {
        if(root==NULL) return 0;
        
        maxx=max(maxx,root->val);
        
        if((root->val>=maxx))
        {
            return 1+ dfs(root->left,maxx) + dfs(root->right,maxx);
        }
        else
        {
            return dfs(root->left,maxx) + dfs(root->right,maxx);
        }
        
    }
};