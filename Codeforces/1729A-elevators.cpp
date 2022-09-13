//1729A Elevators
//Problem Link:

//Time Complexity:
//Space Complexity:

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        ll a,b,c;
        cin>>a>>b>>c;

        if((abs(b-c)+abs(c-1))>abs(a-1)) cout<<1<<endl;
        else if((abs(b-c)+abs(c-1))<abs(a-1)) cout<<2<<endl;
        else cout<<3<<endl;
            
    }
    return 0;
}

