//1750B. Maximum Substring
//Problem Link: https://codeforces.com/contest/1750/problem/B

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
    int t;
    cin>>t;

    while(t--)
    {
        ll n,x=0,y=0,res=0,ct=0,cx=0,cy=0;
        cin>>n;
        string s;
        cin>>s;
    
        for(int i=0;i<n;i++)
        {
            if(s[i]!='1') 
            {
                ct=0;
                cy+=1;
                res+=1;
            }
            else
            {
                ct+=1;
                cx+=1;
                res=0;
            }

            x=max(x,ct);
            y=max(y,res);
        }

        cout<<max({x*x,y*y,cx*cy})<<endl;
    }
 
    return 0;
}