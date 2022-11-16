//43A. Football
//Problem Link: https://codeforces.com/problemset/problem/43/A

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
    int n,a=0,b=0;
    cin>>n;
    string s;
    string a1="",b1="";

    // cin>>s;
    // a1=s;

    for(int i=0;i<n;i++)
    {
        cin>>s;

        if(a1=="") a1=s;
        if(s!=a1) b1=s;

        if(s==a1) a+=1;
        else b+=1;
        
    }

    // cout<<a<<" "<<b<<endl;
    if(a>b) cout<<a1<<endl;
    else cout<<b1<<endl;
 
    return 0;
}