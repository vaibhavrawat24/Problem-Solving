//53. Selection Sort
//Problem Link: https://practice.geeksforgeeks.org/problems/selection-sort/1

//Time complexity: O(n^2)
//Space Complexity: O(1)

public:
    int select(int arr[], int i,int n)
    {
        //int n=arr.size();
        int mini=INT_MAX;
        int minindex=0;
        
        for(;i<n;i++)
        {
            if(arr[i]<mini) 
            {
                minindex=i;
                mini=arr[i];
            }
        }
        
        return minindex;
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n;i++)
       {
           int mini=select(arr,i,n);
           swap(arr[i],arr[mini]);
       }
    }