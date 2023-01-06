//1535A. Fair Playoff
//Problem Link: https://codeforces.com/problemset/problem/1535/A

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
        vector<int> a(4);

        for(int i=0;i<4;i++) cin>>a[i];

        int m1,m2;
        m1=max(a[0],a[1]);
        m2=max(a[2],a[3]);

        sort(a.begin(),a.end());

        if((m1==a[3] || m1==a[2]) && (m2==a[3] || m2==a[2])) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}