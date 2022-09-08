//1678. Goal Parser Interpretation
//Problem Link: https://leetcode.com/problems/goal-parser-interpretation/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0;i<command.size();i++)
        {
            char c=command[i];
            if(c=='G') ans+="G";
            else if(c=='(' && command[i+1]==')') ans+="o";
            else if(c=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')') ans+="al";
        }
        return ans;
        
    }
};