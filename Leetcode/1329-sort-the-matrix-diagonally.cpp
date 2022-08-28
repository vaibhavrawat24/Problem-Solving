//1329. Sort the Matrix Diagonally
//Problem Link: https://leetcode.com/problems/sort-the-matrix-diagonally/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
        int y = mat.size(), x = mat[0].size() - 1;
        vector<int> diag(y);
        for (int i = 2 - y; i < x; i++)
        {
            int k = 0;
            for (int j = 0; j < y; j++)
            {
                if (i+j >= 0 && i+j <= x)
                {
                    diag[k] = mat[j][i+j];
                    k++;
                }
            }
            sort(diag.begin(), diag.begin() + k);
            k = 0;
            
            for (int j = 0; j < y; j++)
            {
                if (i+j >= 0 && i+j <= x)
                {
                    mat[j][i+j] = diag[k];
                    k++;
                }
            }
        }
        return mat;
        
        
    }
};