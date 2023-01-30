//1675A. Food for Animals
//Problem Link: https://codeforces.com/contest/1675/problem/A

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
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

        if(x<=a && y<=b) cout<<"YES"<<endl;
        else if(x>a && y>b)
        {
            if((x-a)+(y-b)<=c) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(x>a)
        {
            if((x-a)<=c) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            if((y-b)<=c) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}