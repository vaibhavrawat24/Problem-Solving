//996A. Hit the Lottery
//Problem Link: https://codeforces.com/problemset/problem/996/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,ans=0;
    cin>>n;

    while(n!=0)
    {
        if(n>=100)
        {
            n=n-100;
            ans+=1;
        }
        else if(n>=20)
        {
            n=n-20;
            ans+=1;
        }
        else if(n>=10)
        {
            n=n-10;
            ans+=1;
        }
        else if(n>=5)
        {
            n=n-5;
            ans+=1;
        }
        else{
            n=n-1;
            ans+=1;
        }
    }

    cout<<ans<<endl;
 
    return 0;
}