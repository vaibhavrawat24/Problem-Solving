//55. Insertion Sort
//Problem Link: https://practice.geeksforgeeks.org/problems/insertion-sort/1

//Time complexity: O(n^2)worst case O(n)best case
//Space Complexity: O(1)

public:
void insert(int arr[], int i)
{
    int x=arr[i];
    int j=i-1;
    while(j>=0 && x<arr[j])
    {
        arr[j+1]=arr[j];
        j--;
    }
    j++;
    arr[j]=x;
}
    public:
//Function to sort the array using insertion sort algorithm.
void insertionSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        insert(arr,i);
    }
}