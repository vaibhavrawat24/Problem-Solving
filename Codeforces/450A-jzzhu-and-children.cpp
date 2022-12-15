//450A. Jzzhu and Children
//Problem Link: https://codeforces.com/problemset/problem/450/A

//Time complexity:
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

bool cmp(pair<int,int>& a,pair<int,int>& b)
{
    return a.second>=b.second;
}
 
int main(){
    int n,m;
    cin>>n>>m;

    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++)
    {
        v.push_back({i,a[i]});
    }

    sort(v.begin(),v.end(),cmp);

    cout<<v[0].first+1<<endl;
 
    return 0;
}