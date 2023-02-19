//1633A. Div. 7
//Problem Link: https://codeforces.com/problemset/problem/1633/A

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
        if(n%7==0)
        {
            cout<<n<<endl;
            continue;
        }
        else
        {
            ll x=n%7;
            ll y=n%10;
            if(y+(7-x)<=9)cout<<n+(7-x)<<endl;
            else cout<<n-x<<endl;
        }
    }

    return 0;
}