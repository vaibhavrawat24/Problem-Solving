//Max Min
//Problem Link: https://practice.geeksforgeeks.org/problems/max-min/1

//Time Complexity:
//Space Comeplexity:

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	sort(A,A+N);
    	
    	return A[0]+A[N-1];
    }

};