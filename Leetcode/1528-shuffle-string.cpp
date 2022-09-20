//1528. Shuffle String
//Problem Link: https://leetcode.com/problems/shuffle-string/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char arr[indices.size()];
        for(int i=0;i<indices.size();i++)
        {
             arr[indices[i]]=s[i];
        }
        
        string restored;
        
        for(int i=0;i<indices.size();i++)
        {
            restored+=arr[i];
        }
        
        return restored;
        
    }
};