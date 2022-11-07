//58A. Chat room
//Problem Link: https://codeforces.com/problemset/problem/58/A

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
    string s,t="hello";
    cin>>s;
    int n=s.size(),j=0,ans=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]==t[j])
        {
            j+=1;
            ans+=1;

            if(ans==5) break;
        }
    }

    if(ans==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    return 0;
}