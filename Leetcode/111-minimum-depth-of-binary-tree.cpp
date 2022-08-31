//111. Minimum Depth of Binary Tree
//Problem Link: https://leetcode.com/problems/minimum-depth-of-binary-tree/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int minDepth(TreeNode* root) {
         if (root == NULL) return 0;

        if (root->left == NULL && root->right == NULL) {
            return 1;
        }

        int left = minDepth(root->left);
        int right = minDepth(root->right);

        if (left == 0) {
            return 1 + right; 
        } else if (right == 0) {
            return 1 +left;
        } else {
            return 1 + min(left, right);
        }
    }
};