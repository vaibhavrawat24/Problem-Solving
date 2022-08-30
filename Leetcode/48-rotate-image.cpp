//48. Rotate Image
//Problem Link: https://leetcode.com/problems/rotate-image/

//Time Complexity: O(n^2)
//Space Complexity: O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i+1;j<matrix.size();j++)
            {
                swap(matrix[j][i],matrix[i][j]);
            }
         
        }
        
    }
};