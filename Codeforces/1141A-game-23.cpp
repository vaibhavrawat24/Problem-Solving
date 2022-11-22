//1141A. Game 23
//Problem Link: https://codeforces.com/problemset/problem/1141/A

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
    ll n,m,ans = 0;
    cin>>n>>m;

    if(n == m){
        cout<<0<<endl;
    }
    else if(m % n != 0){
        cout<<-1<<endl;
    }
    else{
        ll d = m/n;
        while(d % 2 == 0){
            d /= 2;
            ans++;
        }
        while(d % 3 == 0){
            d /= 3;
            ans++;
        }
        if(d != 1)ans = -1;
        cout<<ans<<endl;
    }
 
    return 0;
}