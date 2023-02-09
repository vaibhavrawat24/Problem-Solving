//51. Binary Search
//Problem Link: https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1

//Time complexity:
//Space Complexity:

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int st=0;
        int end=n-1;
        int mid=(st+end)/2;
        
        while(st<=end)
        {
            if(arr[mid]>k) end=mid-1;
            else if(arr[mid]==k) return mid;
            else st=mid+1;
            
            mid=(st+end)/2;
        }
        
        return -1;
    }
};