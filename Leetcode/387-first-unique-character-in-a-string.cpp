//387. First Unique Character in a String
//Problem Link: https://leetcode.com/problems/first-unique-character-in-a-string/description/

//Time Complexity; O(n)
//Space complexity: O(1)

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> ct(128);

        for(int i=0;i<s.size();i++) ct[s[i]]++;

        for(int i=0;i<s.size();i++) 
        {
            if(ct[s[i]]==1) return i;
        }

        return -1;
    }
};