//1760B. Atilla's Favorite Problem
//Problem Link: https://codeforces.com/problemset/problem/1760/B

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
        int n,maxi=0;
        string s;
        cin>>n>>s;

        for(int i=0;i<n;i++)
        {
            if((s[i]-'a')>maxi) maxi=s[i]-'a';
        }

        cout<<maxi+1<<endl;
    }
 
    return 0;
}