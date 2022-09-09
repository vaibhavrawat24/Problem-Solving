//71A Way Too Long Words
//Problem Link: https://codeforces.com/problemset/problem/71/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;

        if(str.size()>10) cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
        else cout<<str<<endl;
    }

    return 0;
}