//69A. Young Physicist
//Problem Link: https://codeforces.com/problemset/problem/69/A

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
    ll n,x,y,z,xsum=0,ysum=0,zsum=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;

        xsum+=x;
        ysum+=y;
        zsum+=z;
    }

    if(xsum==0 && ysum==0 && zsum==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

 
    return 0;
}