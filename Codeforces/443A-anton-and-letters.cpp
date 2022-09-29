//A. Anton and Letters
//Problem Link: https://codeforces.com/problemset/problem/443/A

//Time Complexity;
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    string s;
    //cin>>s;
    getline(cin,s);
    set<char> st;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z') st.insert(s[i]);
    }

    cout<<st.size()<<endl;
 
    return 0;
}