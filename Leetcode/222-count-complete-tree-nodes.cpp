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

//Approach 2: Find the complete binary tree at earlier stage

//Time Complexity: O(log^2 n)
//Space Complexity: O(h)

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        
        TreeNode * l=root;
        TreeNode * r=root;
        int l_lt=0,r_rt=0;
        
        while(l)
        {
            l=l->left;
            l_lt+=1;
        }
        
        while(r)
        {
            r=r->right;
            r_rt+=1;
        }
        
        if(l_lt==r_rt) return (pow(2,l_lt)-1);
        
        return (1+countNodes(root->left)+countNodes(root->right));
        
    }
};