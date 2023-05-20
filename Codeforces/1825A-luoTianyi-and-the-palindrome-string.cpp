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
        string s;
        cin>>s;
        int n=s.length();
        bool all_same=true;

        for (int i=1;i<n;i++) 
        {
            if(s[i]!=s[0]) 
            {
                all_same=false;
                break;
            }
        }
        if(all_same) cout<<"-1\n";
        else cout<<n-1<<"\n";
    }

    return 0;    
}