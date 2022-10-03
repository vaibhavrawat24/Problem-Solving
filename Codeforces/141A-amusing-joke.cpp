//141A. Amusing Joke
//Problem Link: https://codeforces.com/problemset/problem/141/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    string s,d,b;
    cin>>s>>d>>b;

    if(b.size()<s.size()+d.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }

    vector<int> s1(26);
    vector<int> b1(26);
    
    for(int i=0;i<s.size();i++)
    {
        s1[s[i]-'A']++;
    }

    for(int i=0;i<d.size();i++)
    {
        s1[d[i]-'A']++;
    }

    for(int i=0;i<b.size();i++)
    {
        b1[b[i]-'A']++;
    }

    if(s1==b1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}