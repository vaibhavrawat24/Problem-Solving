//Pairwise Xors
//Problem Link: https://www.codechef.com/submit/XORABC

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

bool isPowerOfTwo(int n)
{
    if(n==0) return false;
    return (ceil(log2(n))==floor(log2(n)));
}

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        ll x;
        cin>>x;

        if(x%2==1 or isPowerOfTwo(x)){
            cout<<-1<<endl;
            continue;
        }
        
        x=x>>1;
        ll b =(ll)x-(ll)(1<<(ll)floor(log2(x)));
        cout<<0<<" "<<x<<" "<<b<<endl;

    }
 
    return 0;
}