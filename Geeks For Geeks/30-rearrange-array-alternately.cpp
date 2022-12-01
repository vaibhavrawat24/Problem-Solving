//Rearrange Array Alternately
//Problem Link: https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1

//Time complexity: O(n)
//Space Complexity: O(n)

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	sort(arr,arr+n);
    	vector<int> v;
    	int i=0,j=n-1;
    	
    	while(i<=j)
    	{
    	    v.push_back(arr[j--]);
    	    v.push_back(arr[i++]);
    	}
    	
    	for(int i=0;i<n;i++) arr[i]=v[i];
    	 
    }
};