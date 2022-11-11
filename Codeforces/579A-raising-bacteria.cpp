//579A. Raising Bacteria
//Problem Link: https://codeforces.com/problemset/problem/579/A

//Time Complexity: O(n)
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
 
int main(){
    ll x,c=0;
    cin>>x;

    while(x/2!=0)
    {
        if(x%2==1) c+=1;

        x=x/2;
    }

    cout<<c+1<<endl;
 
    return 0;
}