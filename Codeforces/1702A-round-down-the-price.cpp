//1702A. Round Down the Price
//Problem Link: https://codeforces.com/contest/1702/problem/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
    	cin>>n;
    	ll x=1;
 
    	while(x*10<=n)
    	{
    		x*=10;
    	}
 
    	cout<<n-x<<endl;
    }
 
    return 0;
}