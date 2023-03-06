//64.Cutting Rectangles
//Problem Link: https://practice.geeksforgeeks.org/problems/a7a4da81b20f4a05bbd93f5786fcf7478298f4f5/1

//Time complexity: O(1)
//Space complexity: O(1)

class Solution{
public:
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        long long int k=__gcd(L,B);
        long long int n=L/k*B/k;
        return {n,k};
    }
    
};