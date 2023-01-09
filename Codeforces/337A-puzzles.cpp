//337A. Puzzles
//Problem Link: https://codeforces.com/problemset/problem/337/A

//Time Complexity: O(n log n)
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
    int n,m;
    cin>>n>>m;

    vector<int> a(m);

    for(int i=0;i<m;i++) cin>>a[i];

    sort(a.begin(),a.end());

    int temp=a[n-1]-a[0];

    for(int i=1;i<=m-n;i++)
    {
        if(a[i+n-1]-a[i]<temp)
        {
            temp=a[i+n-1]-a[i];
        }
    }

    cout<<temp<<endl;
 
    return 0;
}