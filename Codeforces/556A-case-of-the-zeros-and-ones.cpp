//556A. Case of the Zeros and Ones
//Problem Link: https://codeforces.com/problemset/problem/556/A

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
    int n;
    string s;
    cin>>n>>s;

    int zers=count(s.begin(),s.end(),'0');
	int ons=count(s.begin(),s.end(),'1');
	cout<< n-(2*min(zers,ons));

    return 0;
}