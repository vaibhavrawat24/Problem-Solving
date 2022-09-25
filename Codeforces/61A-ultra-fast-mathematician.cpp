//61A. Ultra-Fast Mathematician
//Problem Link: https://codeforces.com/problemset/problem/61/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    for (int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i])
        {
            s1[i]='0';
        }
        else
        {
            s1[i]='1';
        }
    }

    cout<<s1<<endl;

    return 0;
}