//1750A. Indirect Sort
//Problem Link: https://codeforces.com/contest/1750/problem/A

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
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll> a(n);

        for(int i=0;i<n;i++) cin>>a[i];

        if(a[0]==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
 
    return 0;
}