//2351. First Letter to Appear Twice
//Problem Link: https://leetcode.com/problems/first-letter-to-appear-twice/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> vis(26);
        
        for(char ch:s)
        {
            if(vis[ch-'a'])
                return ch;
            
            vis[ch-'a']=true;
        }
        
        throw;
        
    }
};