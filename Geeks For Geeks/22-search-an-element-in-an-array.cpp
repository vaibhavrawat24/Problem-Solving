//Search an Element in an array
//Problem Link: https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=2&category[]=Arrays&sortBy=difficulty

//Time Complexity:
//Space Complexity:

class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        
        for(int i=0;i<N;i++)
        {
            if(arr[i]==X)
            {
                return i;
            }
        }
        
        return -1;
        
    }

};