//2471. Minimum Number of Operations to Sort a Binary Tree by Level
//Problem Link: https://leetcode.com/contest/weekly-contest-319/problems/minimum-number-of-operations-to-sort-a-binary-tree-by-level/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int minimumOperations(TreeNode* root)
    {
        queue<TreeNode*> que;
        que.push(root);
        int ans=0;
        
        while(!que.empty())
        {
            int n=que.size();
            vector<int> a(n);
            
            int i=0;
            
            while(n--)
            {
                TreeNode* temp=que.front();
                que.pop();
                a[i++]=temp->val;
                if(temp->left) que.push(temp->left);
                if(temp->right) que.push(temp->right);
            }
            
            ans+=bfs(a);
        } 
        
        return ans;
    }
    int bfs(vector<int> arr)
    {
        int n=arr.size();
        
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]=i;
        
        sort(arr.begin(),arr.end());
        
        vector<bool> vis(n,false);
        int sol=0;
        
        for(int i=0;i<n;i++)
        {
            if(vis[i] || mp[arr[i]]==i) continue;
            int j=i,cyc=0;
            
            while(!vis[j])
            {
                vis[j]=true;
                j=mp[arr[j]];
                cyc+=1;
            }
            
            if(cyc>0) sol+=cyc-1;
        }
        return sol;
    }
};