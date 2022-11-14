//379A. New Year Candles
//Problem Link: https://codeforces.com/problemset/problem/379/A

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
    int a,b,hrs=0,d,m;
    cin>>a>>b;

    hrs+=a;
    while(a>=b)
    {
        d=a/b;
        hrs+=d;
        m=a%b;
        a=d+m;
    }

    cout<<hrs<<endl;
 
    return 0;
}