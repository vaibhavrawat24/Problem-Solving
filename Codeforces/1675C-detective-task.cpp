//1675C. Detective Task
//Problem Link: https://codeforces.com/contest/1675/problem/C

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
        string s;
        cin>>s;

        int n=s.size();

        int lastzero=n-1;

        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0') lastzero=i;
        }

        int ans=0;
     
        for(int i=lastzero;i>=0;i--)
        {
            ans+=1;
            if(s[i]=='1') break;
        }

        cout<<ans<<endl;
    }
}