//1475A. Odd Divisor
//Problem Link: https://codeforces.com/problemset/problem/1475/A

//Time Complexity: O(n)
//Space Complexity: O(1)

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

        if(n%2) 
        {
            cout<<"YES"<<endl; 
            continue;
        }

        while(n%2==0)
        {
            n/=2;
        }

        if(n>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}