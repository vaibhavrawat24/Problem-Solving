//606. Construct String from Binary Tree
//Problem Link: https://leetcode.com/problems/construct-string-from-binary-tree/

//Time Complexity:
//Space Complexity:

class Solution {
 public:
  string tree2str(TreeNode* root) {
        if (!root) return "";
        
        string result =to_string(root->val);
        
        //string left = tree2str(root->left);
        //string right = tree2str(root->right);
        
        if (!root->left && !root->right) return result;
        if (!root->left) 
        {
            return result + "()" + "(" + (tree2str(root->right)) + ")";
        }
        if (!root->right) 
        {
            return result + "(" + (tree2str(root->left)) + ")";
        }
      
        return result + "(" + tree2str(root->left)+ ")" + "(" + tree2str(root->right) + ")";
  }
};
