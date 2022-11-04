//1399B. Gifts Fixing
//Problem Link: https://codeforces.com/problemset/problem/1399/B

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

void solve()
{
    ll n,ans=0;
    cin>>n;

    vector<int> a(n),b(n);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    ll mina=*min_element(a.begin(),a.end());
    ll minb=*min_element(b.begin(),b.end());

    for(int i=0;i<n;i++) ans+=max(a[i]-mina,b[i]-minb);

    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--) solve();
 
    return 0;
}