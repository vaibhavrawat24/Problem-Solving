//1859. Sorting the Sentence
//Problem Link:

//Time Complexity:
//Space Complexity:

class Solution {
public:
    string sortSentence(string s) 
    {
        vector <string> ans(9);
        string words;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]<=57 && s[i]>=48)
            {
                ans[s[i]-49]=words+" "; // s[i]-49 because indexing starts from - so we have to sub extra s[i]-48-1 . 
                words="";
                i++;
            }
            else words+=s[i];
        }
        
        words="";
        for(string x:ans) words+=x;
        
        words.pop_back(); //to remove extra space from last...
        
        return words;
        
    }
};