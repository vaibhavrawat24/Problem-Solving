//265A. Colorful Stones (Simplified Edition)
//Problem Link: https://codeforces.com/problemset/problem/265/A

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
    string s,t;
    cin>>s>>t;
    int pos=0;
    for(int i=0;i< t.size();i++)
    {
        if(t[i]==s[pos])
        {
            pos+=1;
        }
    }
    cout<<pos+1<<endl;
    
    return 0;
}