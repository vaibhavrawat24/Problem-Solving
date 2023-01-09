//318A. Even Odds
//Problem Link: https://codeforces.com/contest/318/problem/A

//Time Complexity:O(1)
//Space Complexity:O(1)

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
    ll n,k;
    cin>>n>>k;
    
    if(k<=(n+1)/2) cout<<k*2-1<<endl;
    else cout<<(k-(n+1)/2)*2<<endl;

    return 0;
}