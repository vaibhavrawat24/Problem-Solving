//56. Quick Sort
//Problem Link: https://practice.geeksforgeeks.org/problems/quick-sort/1

//time complexity: O(n^2)worst case O(log n) best,average case
//Space Compelxity: O(log n)

public:
//Function to sort an array using quick sort algorithm.
void quickSort(int arr[], int low, int high)
{
    if(low<high){
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}

public:
int partition (int arr[], int low, int high)
{
    // Your code here
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    
    swap(arr[i+1],arr[high]);
    return(i+1);
}