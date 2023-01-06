//1742A. Sum
//Problem Link: https://codeforces.com/problemset/problem/1742/A

//time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;

        if(x+y==z || y+z==x || z+x==y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}