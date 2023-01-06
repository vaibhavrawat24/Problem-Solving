//A. Lucky?
//Problem Link: https://codeforces.com/problemset/problem/1676/A

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
        string n;
        int p1=0,p2=0;
        cin>>n;
        
        for(int i=0;i<3;i++)
        {
            p1+=n[i]-'0';
            p2+=n[5-i]-'0';
        }

        if(p1==p2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}