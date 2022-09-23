//Reverse array in groups
//Problem Link: https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1?page=1&category[]=Arrays&curated[]=1&sortBy=accuracy

//Time Complexity:
//Space Comlpexity:

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
            int l = 0, r = min(k,n);
            
            while(l<=n)
            {
                reverse(arr.begin()+l, arr.begin()+r);
                l = l+k;
                r = min(n,r+k);
           }
    }
};