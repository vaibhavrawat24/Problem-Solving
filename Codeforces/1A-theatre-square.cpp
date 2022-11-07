//1A. Theatre Square
//Problem Link: https://codeforces.com/problemset/problem/1/A

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
    ll n,m,a,x=0,y=0,sum=0;
    cin>>n>>m>>a;

    x=n/a;
    y=m/a;
    if(n%a!=0) x=x+1;
    if(m%a!=0) y=y+1;
    
    sum=x*y;
    cout<<sum<<endl;

    return 0;
}