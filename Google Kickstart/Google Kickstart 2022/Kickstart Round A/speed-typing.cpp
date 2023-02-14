//Speed Typing 
//Problem Link: https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb33e/00000000009e7021

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
    int t;
    cin>>t;

    for(int k=1;k<=t;k++)
    {
        string s,t;
        cin>>s>>t;

        int i=0,j=0,ans=0;

        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else{
                ans++;
                j++;
            }
        }

        if(i!=s.size()) cout<<"Case #"<<k<<": "<<"IMPOSSIBLE"<<endl;
        else{
            ans=t.size()-i;
            cout<<"Case #"<<k<<": "<<ans<<endl;
        }

    }
}