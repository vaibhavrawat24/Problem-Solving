//160A. Twins
//Problem Link: https://codeforces.com/problemset/problem/160/A

//Time complexity:
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
    int n,sum=0,res=0;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    int half=sum/2,temp=0;

    sort(a.begin(),a.end(),greater<int>());

    for(int i=0;i<n;i++)
    {
        temp+=a[i];
        res+=1;
        if(temp>half) 
        {
            cout<<res<<endl;
            return 0;
        }
    }
 
    return 0;
}