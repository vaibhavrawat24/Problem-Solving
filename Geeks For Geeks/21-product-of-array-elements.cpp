//Product of array elements
//Problem Link: https://practice.geeksforgeeks.org/problems/product-of-array-element/1?page=2&category[]=Arrays&sortBy=difficulty

//Time Complexity:
//Space Complexity:

long long int product(int ar[], int n, long long int mod)
 {
     
    long long prod=1;
    
    for(int i=0;i<n;i++)
    {
       prod=(prod*ar[i])%mod;
    }
    
    return prod;
     
 }