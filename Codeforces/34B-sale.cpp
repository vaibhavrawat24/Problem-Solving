//34B. Sale
//Problem Link: https://codeforces.com/problemset/problem/34/B

//Time Complexity: O(n log n)
//Space Complexity: O(1)

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
    ll n,m,ans=0;
    cin>>n>>m;

    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());

    for(int i=0;i<n;i++)
    {
        if(a[i]<0 && m!=0) 
        {
            ans+=abs(a[i]);
            m-=1;
        }
    }

    cout<<ans<<endl;
 
    return 0;
}