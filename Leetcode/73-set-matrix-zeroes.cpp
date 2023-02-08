//73. Set Matrix Zeroes
//Problem Link: https://leetcode.com/problems/set-matrix-zeroes/description/

//Bruteforce Approach

//Time complexity: O(m*n)
//Space Complexity: O(m+n)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<bool> row(m,false);
        vector<bool> col(n,false);

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(row[i]==true || col[j]==true)
                {
                    matrix[i][j]=0;
                }
            }
        }

        return;
    }
};

//Optimized Approach

//Time Complexity: O(m*n)
//Space Complexity: O(1)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        const int m = matrix.size();
        const int n = matrix[0].size();
        bool shouldFillFirstRow = false;
        bool shouldFillFirstCol = false;

        for (int j = 0; j < n; ++j)
        if (matrix[0][j] == 0) {
            shouldFillFirstRow = true;
            break;
        }

        for (int i = 0; i < m; ++i)
        if (matrix[i][0] == 0) {
            shouldFillFirstCol = true;
            break;
        }

      
        for (int i = 1; i < m; ++i)
        for (int j = 1; j < n; ++j)
            if (matrix[i][j] == 0) {
            matrix[i][0] = 0;
            matrix[0][j] = 0;
            }

    
        for (int i = 1; i < m; ++i)
        for (int j = 1; j < n; ++j)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            matrix[i][j] = 0;

        if (shouldFillFirstRow)
        for (int j = 0; j < n; ++j)
            matrix[0][j] = 0;

        if (shouldFillFirstCol)
        for (int i = 0; i < m; ++i)
            matrix[i][0] = 0;
    }
};