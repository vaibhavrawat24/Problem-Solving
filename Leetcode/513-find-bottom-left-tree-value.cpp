//513. Find Bottom Left Tree Value
//Problem Link: https://leetcode.com/problems/find-bottom-left-tree-value/

//Approach 1: BFS

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) 
    {
        queue<TreeNode*> q{{root}};
        TreeNode* curr=NULL;
        
        while(!q.empty())
        {
            curr=q.front();
            q.pop();
            if(curr->right) q.push(curr->right);
            if(curr->left) q.push(curr->left);
        }
        
        return curr->val;
    }
};