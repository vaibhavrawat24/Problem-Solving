//1704. Determine if String Halves Are Alike
//Problem Link: https://leetcode.com/problems/determine-if-string-halves-are-alike/

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int a=0,b=0,n=s.size(),j=n-1;
        
        for(int i=0;i<n/2;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') a+=1;
            //this condition will check for vowels in first half
            
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U') b+=1;
            //this condition will check for vowels in second half
            
            j-=1; 
        }
        
        if(a==b) return true;
        else return false;
    }
};