//431A. Black Square
//Problem Link: https://codeforces.com/problemset/problem/431/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    string s;
    cin>>s;
    int ans=0,n=s.size();
    

    for(int i=0;i<n;i++)
    {
        if(s[i]=='1') ans+=a;
        else if(s[i]=='2') ans+=b;
        else if(s[i]=='3') ans+=c;
        else ans+=d;
    }

    cout<<ans<<endl;
 
    return 0;
}