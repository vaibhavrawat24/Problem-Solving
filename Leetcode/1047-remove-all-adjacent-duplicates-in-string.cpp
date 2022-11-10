//1047. Remove All Adjacent Duplicates In String
//Problem Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    string removeDuplicates(string s) {
        string ans; 
        for(char i:s)
        {
            if(ans.size()==0) ans.push_back(i); 
            else if(ans.back()==i) ans.pop_back();
            else ans.push_back(i); 
        }
        return ans;
    }
};