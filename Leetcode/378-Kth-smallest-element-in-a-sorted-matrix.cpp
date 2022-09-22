//378. Kth Smallest Element in a Sorted Matrix
//Problem Link: https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        
        sort(ans.begin(),ans.end());
        
        return ans[k-1];
        
    }
};