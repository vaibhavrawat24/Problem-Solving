//Peak element
//Problem Link: https://practice.geeksforgeeks.org/problems/peak-element/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions

//Time Complexity:
//Space Complexity:

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        int maxi=arr[0],ans=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
                ans=i;
            }
        }
        
        return ans;
    }
};