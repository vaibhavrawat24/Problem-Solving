//520A. Pangram
//Problem Link: https://codeforces.com/problemset/problem/520/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(n<26) 
    {
        cout<<"NO"<<endl;
        return 0;
    }

    vector<int> ch(26,0);

    for(int i=0;i<n;i++) 
    {
        ch[(tolower(s[i]))-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(ch[i]==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
 
    return 0;
}