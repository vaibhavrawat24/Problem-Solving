//1729A Decode String
//Problem Link:

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n; 

        string s;
        cin>>s;

        string ans = "" ; 
        stack<char> st;

        for(int i=0;i<n;i++)
        {
            st.push(s[i]);
        }

        while(!st.empty())
        {
            int temp=st.top()-'0';
            st.pop();

            if(temp!=0)
            {
                ans+=(temp-1+'a');
            }
            else
            {
                int temp2=st.top()-'0';
                st.pop();
                int temp3=st.top()-'0';
                st.pop();
                int temp4=temp3*10+temp2;
                ans+=(temp4-1+'a');
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}