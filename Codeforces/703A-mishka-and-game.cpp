//703A. Mishka and Game
//Problem Link: https://codeforces.com/problemset/problem/703/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    ll n,a,b,m=0,c=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b) m+=1;
        else if(b>a) c+=1;
        else{
            m+=1;
            c+=1;
        }
    }

    if(m>c) cout<<"Mishka"<<endl;
    else if(c>m) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
 
    return 0;
}