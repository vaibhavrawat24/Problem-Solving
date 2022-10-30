//1740B Jumbo Extra Cheese 2
//Problem Link: https://codeforces.com/problemset/problem/1740/B

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
        ll n,a,b,sol=0,minx=0,maxx=-1e9;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>a>>b;

            minx+=min(a,b);
            maxx=max(maxx,max(a,b));
        }

        if(maxx==-1e9) cout<<"0"<<endl;
        else
        {
            sol=2*(minx+maxx);
            cout<<sol<<endl;
        }
    }
 
    return 0;
}