//2415. Reverse Odd Levels of Binary Tree
//Problem Link: https://leetcode.com/contest/weekly-contest-311/problems/reverse-odd-levels-of-binary-tree/

//Time Complexity:
//Space Complexity:

class Solution {
public:
  
    TreeNode* reverseOddLevels(TreeNode* root) 
    {
        int depth=0;
        reverse(root->left,root->right,depth);
        return root;
        
    }
    
    void reverse(TreeNode* root1,TreeNode* root2,int depth)
    {
        if(!root1 || !root2)
        {
            return;
        }

        if(depth%2 == 0)
        {
            swap(root1->val, root2->val);
        }

        reverse(root1->left, root2->right, depth+1);
        reverse(root1->right, root2->left, depth+1);
       
    }
};