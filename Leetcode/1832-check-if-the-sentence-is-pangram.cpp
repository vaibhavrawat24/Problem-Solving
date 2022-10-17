//1832. Check if the Sentence Is Pangram
//Problem Link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        vector<int> v(26);
        
        for(int i=0;i<n;i++)
        {
            v[sentence[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(v[i]==0) return false;
        }
        
        return true;
    }
};