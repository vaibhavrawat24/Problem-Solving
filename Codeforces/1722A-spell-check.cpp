//1722A. Spell Check
//Problem Link: https://codeforces.com/problemset/problem/1722/A

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

void solve()
{
    int n;
    cin>>n;
    string s,t="Timur";
    cin>>s;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
int main(){
    int t;
    cin>>t;

    while(t--) solve();
 
    return 0;
}