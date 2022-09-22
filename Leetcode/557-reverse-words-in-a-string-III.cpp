//557. Reverse Words in a String III
//Problem Link: https://leetcode.com/problems/reverse-words-in-a-string-iii/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    string reverseWords(string s) 
    {
        string ans="";
        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                while(!st.empty())
                {
                    int temp=st.top();
                    st.pop();
                    ans+=temp;
                }
                ans+=' ';
                continue;
            }
            
            else if(i==s.size()-1)
            {
                st.push(s[i]);
                while(!st.empty())
                {
                    int temp=st.top();
                    st.pop();
                    ans+=temp;
                }
            }
            
            st.push(s[i]);
        }
        return ans;
        
    }
};