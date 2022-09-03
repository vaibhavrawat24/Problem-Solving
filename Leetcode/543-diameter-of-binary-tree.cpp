//543. Diameter of Binary Tree
//Problem Link: https://leetcode.com/problems/diameter-of-binary-tree/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        depth(root,ans);
        return ans;
        
    }
    
    int depth(TreeNode* root,int& ans)
    {
        if(root==NULL) return 0;
        
        int left=depth(root->left,ans);
        int right=depth(root->right,ans);
        
        ans=max(ans,left+right);
        return max(left,right)+1;
    }
};