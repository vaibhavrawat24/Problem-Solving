//1748B. Diverse Substrings
//Problem Link: https://codeforces.com/contest/1748/problem/B

//Time Complexity: O(n^2)
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

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        ll res=0;

        for(int i=0;i<n;i++)
        {
            int def=0;
            vector<int> a(10);
            
            for(int j=i;j<min(i+135,n);j++)
            {
                auto temp=s[j]-'0';
                if(a[temp]==0) def+=1;

                a[temp]+=1;

                if(*max_element(a.begin(),a.end())<=def) res+=1;
            }
        }

        cout<<res<<endl;
    }
}