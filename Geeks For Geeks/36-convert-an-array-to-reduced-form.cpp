//36 Convert an array to reduced form
//Problem Link: https://practice.geeksforgeeks.org/problems/convert-an-array-to-reduced-form1101/1

//Time Complexity: O(n log n)
//Space Compelxity: O(n)

class Solution{
public:
	void convert(int arr[], int n) {
        vector<pair<int,int>> v;
	    for(int i=0;i<n;i++)
	    {
	        v.push_back({arr[i],i});
	    }
	    
	    sort(v.begin(),v.end());
	    
	    for(int i=0;i<n;i++)
	    {
	        arr[v[i].second]=i;
	    }
	}

};