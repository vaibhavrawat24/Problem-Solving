//Convert array into Zig-Zag fashion
//Problem Link:

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    for(int i=1;i<n;i++)
	    {
            if(i%2==1 && arr[i-1]>arr[i])
            {
                swap(arr[i-1],arr[i]);
            }
            else if(i%2==0 && arr[i-1]<arr[i])
            {
                swap(arr[i-1],arr[i]);
            }
        }

    }
};