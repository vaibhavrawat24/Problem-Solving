//1374C. Move Brackets
//Problem Link: https://codeforces.com/problemset/problem/1374/C


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
        int n,open=0,close=0,ans=0;
        cin>>n;

        string s;
        cin>>s;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' && s[i+1]==')')
            {
                i+=1;
                continue;
            }

            if(s[i]=='(') open+=1;
            
            if(s[i]==')')
            {
                close+=1;
                if(open<close)
                {
                    ans+=1;
                    close-=1;
                }
            }
        }
        cout<<ans<<endl;
        
    }
 
    return 0;
}