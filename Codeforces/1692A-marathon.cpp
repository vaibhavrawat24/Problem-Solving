//1692A. Marathon
//Problem Link: https://codeforces.com/problemset/problem/1692/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        ll a,b,c,d,ans=0;
        cin>>a>>b>>c>>d;
       
        if(a<b) ans+=1;
        if(a<c) ans+=1;
        if(a<d) ans+=1;

        cout<<ans<<endl;
    }
 
    return 0;
}
