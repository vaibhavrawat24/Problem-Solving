//2414. Length of the Longest Alphabetical Continuous Substring
//Problem Link: https://leetcode.com/contest/weekly-contest-311/problems/length-of-the-longest-alphabetical-continuous-substring/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int longestContinuousSubstring(string s) 
    {
        int m=1;
        int ans=1;
        
        for(int i=1;i<s.size();i++)
        {
            if(s[i] == s[i-1]+1)
            {
                ans++;
                m=max(ans,m);
            }
            else
            {
                ans=1;
            }
        }
        m=max(m,ans);
        
        return m;
    }
};