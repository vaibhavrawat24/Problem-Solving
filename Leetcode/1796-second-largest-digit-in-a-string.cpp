//1796. Second Largest Digit in a String
//Problem Link: https://leetcode.com/problems/second-largest-digit-in-a-string/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int secondHighest(string s) {
        set<int> st;
        for(char ch : s)
        {
            if(isdigit(ch))
            {
                st.insert(ch);
            }
        }
        
        if(st.size()<2) return -1;
        
        return *(++st.rbegin()) - '0';
        
    }
};