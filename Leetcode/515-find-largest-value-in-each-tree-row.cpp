//515. Find Largest Value in Each Tree Row
//Problem Link: https://leetcode.com/problems/find-largest-value-in-each-tree-row/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if (!root)
            return {};
        
        vector<int> ans;
        queue<TreeNode*> q{{root}};
        
        while(!q.empty())
        {
            int maxi=INT_MIN;
            for(int i=q.size();i>0;i--)
            {
                TreeNode* curr=q.front();
                q.pop();
                maxi=max(maxi,curr->val);
                
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                
            }
            
            ans.push_back(maxi);
        }
        
        return ans;
        
    }
};