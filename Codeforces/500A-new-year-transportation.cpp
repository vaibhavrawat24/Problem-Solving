//500A. New Year Transportation
//Problem Link: https://codeforces.com/problemset/problem/500/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back
template<class T> using mxpq = priority_queue<T>;
template<class T> using mnpq = priority_queue<T, vector<T>, greater<T>>;

bool prime(int n)
{
    vector<int> prime(n+1,true);
    prime[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(int j=2*i;j<=n;j+=i) prime[j]=false;
        }
    }
    if(prime[n]==true) return true;
    else return false;
}
 
int main(){
    ll n,t,c=1;
    cin>>n>>t;

    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    int p=0;
    while(p<t-1) p+=a[p];

    if(p==t-1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    return 0;
}