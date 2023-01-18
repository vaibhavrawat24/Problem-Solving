//1335B. Construct the String
//Problem Link: https://codeforces.com/problemset/problem/1335/B

//Time Complexity;
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
    int t;
    cin>>t;

    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        char c[]="abcdefghijklmnopqrstuvwxyz";
        string s;
        for(int i=0; i<b; i++){
            s[i]=c[i];
        }
        int k=0;
        while(n--)
        {
            cout<<s[k];
            k++;
            if(k==b)
                k=0;
        }
        cout<<endl;
    }
 
    return 0;
}