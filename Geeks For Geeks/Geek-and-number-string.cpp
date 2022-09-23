//Geek and Number String
//Problem Link: https://practice.geeksforgeeks.org/problems/904237fa926d79126d42c437802b04287ea9d1c8/1

//Time Complexity:
//Space Complexity:

class Solution{
public:
    int minLength(string s, int n) {
       stack<char> st;
        unordered_set<string> t = {"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"};
        for(int i = 0; i < n; i++) 
        {
            string temp = "";
            temp += s[i];
            if(st.empty() || t.find(st.top()+temp) == t.end()) 
            {
                st.push(s[i]);
            }
            else 
            {
                if(t.find(st.top()+temp) != t.end())
                {
                    st.pop();
                }
            }
        }
        return st.size();
       
       
    } 
};