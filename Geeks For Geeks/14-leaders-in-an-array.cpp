//Leaders in an array
//Problem Link: https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&category[]=Arrays&curated[]=1&sortBy=accuracy

//Time Complexity:
//Space Complexity:

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> value;
        int max=a[n-1];
        value.push_back(max);
   
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=max)
            {
                value.push_back(a[i]);
                max=a[i];
            }
        }
        
        reverse(value.begin(),value.end());
        
        return value;
        
    }
};