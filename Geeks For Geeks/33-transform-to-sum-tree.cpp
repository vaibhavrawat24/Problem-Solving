//33 Transform to Sum Tree
//Problem Link: https://practice.geeksforgeeks.org/problems/d7e0ce338b11f0be36877d9c35cc8dfad6636957/1

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        sumofNodes(node);
    }
    
    int sumofNodes(Node* node)
    {
        if(node==NULL) return 0;
        
        int leftsum=sumofNodes(node->left);
        int rightsum=sumofNodes(node->right);
        
        int total=leftsum+rightsum+node->data;
        
        node->data=leftsum+rightsum;
        
        return total;
    }
};