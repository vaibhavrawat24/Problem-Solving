//872. Leaf-Similar Trees
//Problem Link: https://leetcode.com/problems/leaf-similar-trees/description/

//Time Complexity: O(t1+t2)
//Space complexity: O(t1+t2)

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;            //declaring vector1 for storing the leaf nodes of tree1
        vector<int> v2;            //declaring vector1 for storing the leaf nodes of tree2

        dfs(root1,v1);             //running dfs on tree1
        dfs(root2,v2);             //running dfs on tree2

        return v1==v2;             //this will return true if both vectors are equal ,else false
    }

    void dfs(TreeNode* root,vector<int>& v)
    {
        if(root==NULL) return;       //if we are at a null root return;

        if(root->left==NULL && root->right==NULL) v.push_back(root->val);  //if there is no left and right child, that means we're at
        dfs(root->left,v);                                                 //the leaf node, so we'll push it into our vector
        dfs(root->right,v);
    }
};