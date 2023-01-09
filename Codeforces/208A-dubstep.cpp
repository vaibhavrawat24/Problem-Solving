//208A. Dubstep
//Problem Link: https://codeforces.com/problemset/problem/208/A

//Time Complexity: O(n)
//Space Compelxity: O(n)

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
    string s,ans="";
    cin>>s;

    int n=s.size();

    for(int i=0;i<n;i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=2;
        }
        else if(s[i-3]!='W' || s[i-2]!='U' || s[i-1]!='B')
        {
            ans+=s[i];
        }
        else{
            if(ans.size()==0) ans+=s[i];
            else 
            {
                ans+=" ";
                ans+=s[i];
            }
        }
    }

    cout<<ans<<endl;
 
    return 0;
}