//580A. Kefa and First Steps
//Problem Link: https://codeforces.com/problemset/problem/580/A

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
    int n,temp=1,res=1;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1]) temp+=1;
        else
        {
            if(temp>res) res=temp;
            temp=1;
        }
    }

    if(temp>res) res=temp;

    cout<<res<<endl;
 
    return 0;
}