//1296A. Array with Odd Sum
//Problem Link: https://codeforces.com/problemset/problem/1296/A

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

void solve()
{
    int n,odd=0,even=0;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++) 
    {
        cin>>a[i];

        if(a[i]%2!=0) odd+=1;
        else even+=1;
    }

    if(odd==0 || (even==0 && n%2==0)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return;
}
 
int main(){
    int t;
    cin>>t;

    while(t--) solve();
    
    return 0;
}