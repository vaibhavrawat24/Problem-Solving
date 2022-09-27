//Rearranging array
//Problem Link: https://practice.geeksforgeeks.org/problems/rearranging-array1648/1?page=1&category[]=Arrays&sortBy=accuracy

//Time complexity:
//Space Complexity:

class Solution{
    public:
    void Rearrange(int a[], int n, int answer[])
    {
        sort(a,a+n);
        for(int k=0,i=0,j=n-1;k<n;k++,i++,j--)
        {
           answer[k] = a[i];
           k++;
           answer[k] = a[j];
        }
    }
};