//474A. Keyboard
//Problem Link: https://codeforces.com/problemset/problem/474/A

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
    char ch;
    string s,ans,temp="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>ch>>s;

    int n=s.size();
   
    for(int i=0;i<n;i++)
    {
        int index=temp.find(s[i]);

        if(ch=='L') ans+=temp[index+1];
        else ans+=temp[index-1];
    }

    cout<<ans<<endl;

    return 0;
}