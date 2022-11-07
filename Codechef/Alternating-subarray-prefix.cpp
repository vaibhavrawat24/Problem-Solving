//Alternating subarray prefix
//Problem Link: https://www.codechef.com/submit/ALTARAY?tab=statement

//Time Complexity: O(n)
//Space Complexity: O(n)

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
        
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<ll> ans(n);
        ans[n-1]=1;
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]*a[i+1]<0) ans[i]=ans[i+1]+1;
            else ans[i]=1;
        }
        
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
 
    return 0;
}