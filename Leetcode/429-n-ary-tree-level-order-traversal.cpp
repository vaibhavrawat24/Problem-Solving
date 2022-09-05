//429. N-ary Tree Level Order Traversal
//Problem Link: https://leetcode.com/problems/n-ary-tree-level-order-traversal/

//Time Complexity: O(n)
//Space Complexity: O(n)

//Approach: BFS

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
         if (!root) return {};
        
        vector<vector<int>> ans;
        queue<Node*> q{{root}};
         while(!q.empty())
         {
             vector<int> currLevel;
             for(int i=q.size();i>0;i--)
             {
                 Node* temp=q.front();
                 q.pop();
                 currLevel.push_back(temp->val);
                 
                 for(auto child: temp->children)
                 {
                     q.push(child);
                 }
             }
             ans.push_back(currLevel);
         }
        
        return ans;
        
    }
};

