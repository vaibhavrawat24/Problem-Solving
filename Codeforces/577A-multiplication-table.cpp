//577A. Multiplication Table
//Problem Link: https://codeforces.com/problemset/problem/577/A

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
    int n,x,c(0);
    cin>>n>>x;

    for(int i=1;i<=n;i++) if(x%i==0 && x/i<=n) c+=1;

    cout<<c<<endl;
 
    return 0;
}