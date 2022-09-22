//266B. Queue at the School
//Problem Link: https://codeforces.com/problemset/problem/266/B

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,t;
    string s;
    cin>>n>>t>>s;

    while(t--)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i+=1;
            }
        }
    }
    cout<<s<<endl;
 
    return 0;
}