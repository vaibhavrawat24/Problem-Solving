//1619A. Square String?
//Problem Link:https://codeforces.com/problemset/problem/1619/A

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

void solu(string s)
{
    if(s.size()%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    } 

    int n=s.size()/2;

    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i+n]) 
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}
 
int main(){
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        solu(s);
       
    }
 
    return 0;
}