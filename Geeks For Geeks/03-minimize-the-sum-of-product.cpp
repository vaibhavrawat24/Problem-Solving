//Minimize the sum of product
//Problem Link: https://practice.geeksforgeeks.org/problems/minimize-the-sum-of-product1525/1?page=1&category[]=Arrays&curated[]=1&sortBy=accuracy

//Time Complexity:
//Space Complexity:

class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        sort(a,a+n);
        sort(b,b+n);
        long long ans=0;
        
        for(int i=0;i<n;i++)
        {
            ans+=a[i]*b[n-i-1];
        }
        
        return ans;
    }
};