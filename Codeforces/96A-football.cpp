//96A. Football
//Problem Link: https://codeforces.com/problemset/problem/96/A

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
    int count=1,n=s.size();

    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            count+=1;
            if(count==7)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
        {
            count=1;
        }
    }

    cout<<"NO"<<endl;
 
    return 0;
}