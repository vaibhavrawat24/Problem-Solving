//1793A. Yet Another Promotion
//Problem Link: https://codeforces.com/contest/1793/problem/A

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

int solve()
{
    long long a,b,n,m;
    cin>>a>>b>>n>>m;
    if(n<=m){
        cout<<n*min(a,b)<<endl;
        return 0;
    }
 
    if((m*a)<=(m+1)*b){
        long long temp1=n/(m+1);
        long long temp2=n%(m+1);
        long long temp3=temp1*m*a;
        temp3+=temp2*min(a,b);
        cout<<temp3<<endl;
    }
    else{
        cout<<n*b<<endl;   
    }
    return 0;
}

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}