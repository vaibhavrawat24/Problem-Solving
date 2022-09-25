//Binary Search
//Problem Link: https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&category[]=Arrays&curated[]=1&sortBy=accuracy

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k) return i;
        }
        
        return -1;
    }
};