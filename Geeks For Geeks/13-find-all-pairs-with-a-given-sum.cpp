//Find all pairs with a given sum
//Problem Link: https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x5808/1?page=1&category[]=Arrays&curated[]=1&sortBy=accuracy

//Time Complexity:
//Space Complexity:

class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        sort(A, A+N);
        sort(B, B+M);
        reverse(B, B+M);
        vector<pair<int, int>> ans;

        int i=0,j=0;

        while(i<N && j<M)
        {
            if(A[i]+B[j]==X)
            {
                pair<int,int> res;
                res.first = A[i];
                res.second = B[j];
                ans.push_back(res);
                i++;
                j++;
            }
            else if(A[i]+B[j]<X) i++;
            else j++;
        }

        return ans;
    }
};
