//944. Delete Columns to Make Sorted
//Problem Link: https://leetcode.com/problems/delete-columns-to-make-sorted/

//Time Complexity: O(n⋅∣A∣), where n = |A[0]∣
//Space Complexity: O(1)

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int n = A[0].length();
        int ans = 0;

        for (int j = 0; j < n; ++j)
        {
            for (int i = 0; i + 1 < A.size(); ++i)
            {
                if (A[i][j] > A[i + 1][j]) 
                {
                    ++ans;
                    break;
                }
            }
        }

        return ans;
    }
};