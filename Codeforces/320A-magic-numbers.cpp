//320A. Magic Numbers
//Problem Link: https://codeforces.com/problemset/problem/320/A

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
    string s;
    cin>>s;
    int n=s.size();

    if(s[0]!='1')
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4') i+=2;
        else if(s[i]=='1' && s[i+1]=='4') i+=1;
        else if((s[i]!='1') || (s[i]!='1' && s[i+1]!='4') || (s[i]!='1' && s[i+1]!='4' && s[i+2]!='4'))
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}