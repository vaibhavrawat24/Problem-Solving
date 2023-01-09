//133A. HQ9+
//Problem Link: https://codeforces.com/problemset/problem/133/A

//Time Complexity: O(n)
//Space Complexity: O(1)

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
    string p;
    cin>>p;
    int n=p.size();

    for(int i=0;i<n;i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9') 
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
 
    return 0;
}