//Fitting The Array
//Problem Link: https://practice.geeksforgeeks.org/problems/fitting-the-array1514/1

//Time Complexity:
//Space Complexity:

class Solution{
public:
    
    bool isFit(int arr[], int brr[], int n){
        sort(arr,arr+n);
        sort(brr,brr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]>brr[i]) return 0;
        }
        
        return 1;
    }
};