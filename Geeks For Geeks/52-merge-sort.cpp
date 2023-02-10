//52. Merge Sort
//Problem Link: https://practice.geeksforgeeks.org/problems/merge-sort/1

//time Complexity: O(n log n)
//Space Complexity: O(n)

public:
void merge(int arr[], int low, int mid, int high)
{
        vector<int> temp;
        int left=low;
        int right=mid+1;
        
        while(left<=mid && right<=high)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left<=mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        
        while(right<=high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i=low;i<=high;i++)
        {
            arr[i]=temp[i-low];
        }
}
public:
void mergeSort(int arr[], int low, int high)
{
    if(low==high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}