//2114. Maximum Number of Words Found in Sentences
//Problem Link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int c=0;
        for(auto it:sentences)
        {
            int h=count(it.begin(),it.end(),' ');
            if(h>c) c=h;
        }
        
        return c+1;
        
    }
};