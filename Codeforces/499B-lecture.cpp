//499B. Lecture
//Problem Link: https://codeforces.com/problemset/problem/499/B

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
 
int main(){
    int n,m;
    cin>>n>>m;
    map <string,string> t;
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        t[a]=b;
    }
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        string y;
        y=t[x];
        if(y.size()<x.size())
            cout<<y<<" ";
        else
            cout<<x<<" ";
    }
 
    return 0;
}