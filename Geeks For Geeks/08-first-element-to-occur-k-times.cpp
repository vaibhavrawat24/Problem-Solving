//First element to occur k times
//Problem Link: https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1?page=1&category[]=Arrays&curated[]=1&sortBy=accuracy

//Time Complexity:
//Space Complexity:

class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int>mp;
        int result = -1;
        for(int i=0;i<n;i++)
        {
           mp[a[i]]++;
           
           if(mp[a[i]] == k)
           {
               result = a[i];
               break;
           }
        }
        return result;
    }
};