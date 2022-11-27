//Professor And Directions
//Problem Link: https://www.codechef.com/problems/DIRECTN?tab=statement

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
    
    while(t--)
    {
        int n,ans=0;
        string s;
        cin>>n>>s;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1]) ans=1;
        }
        
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}