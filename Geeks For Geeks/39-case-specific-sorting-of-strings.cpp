//39 Case-specific Sorting of Strings
//Problem Link: https://practice.geeksforgeeks.org/problems/case-specific-sorting-of-strings4845/1

//Time Complexity: O(n log n)
//Space Complexity: O(n)

class Solution
{
    public:
    
    string caseSort(string str, int n)
    {
        string ans,up,low;
        
        for(int i=0;i<n;i++)
        {
            if(str[i]>=65 && str[i]<=90) up+=str[i];
            else low+=str[i];
        }
        
        sort(up.begin(),up.end());
        sort(low.begin(),low.end());
        
        int k=0,l=0;
        
        for(int i=0;i<n;i++)
        {
            if(str[i]>=65 && str[i]<=90) ans+=up[k++];
            else ans+=low[l++];
        }
        
        return ans;
    }
};