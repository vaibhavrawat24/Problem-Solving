//345. Reverse Vowels of a String
//Problem Link: https://leetcode.com/problems/reverse-vowels-of-a-string/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vow;
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='e' || s[i]=='u' || s[i]=='A' || s[i]=='I' || s[i]=='O' || s[i]=='E' || s[i]=='U')
            {
                vow.push_back(s[i]);
            }
        }
        
        reverse(vow.begin(),vow.end());
        
        string ans;
        int j=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='e' || s[i]=='u' || s[i]=='A' || s[i]=='I' || s[i]=='O' || s[i]=='E' || s[i]=='U')
            {
                ans+=vow[j];
                j+=1;
            }
            else
            {
                ans+=s[i];
            }
        }
        
        return ans;
        
    }
};