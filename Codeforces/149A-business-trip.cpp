//149A. Business trip
//Problem Link: https://codeforces.com/problemset/problem/149/A

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
    int k,ans=0,res=0;
    cin>>k;

    vector<int> a(12);

    for(int i=0;i<12;i++) cin>>a[i];

    sort(a.begin(),a.end(),greater<int>());

    if(ans>=k)
    {
        cout<<res<<endl;
        return 0;
    }

    for(auto it:a)
    {
        ans+=it;
        res+=1;

        if(ans>=k)
        {
            cout<<res<<endl;
            return 0;
        }
    }

    cout<<"-1"<<endl;
 
    return 0;
}