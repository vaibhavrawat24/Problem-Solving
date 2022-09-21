//110A. Nearly Lucky Number
//Problem Link: https://codeforces.com/problemset/problem/110/A

//Time Complexity:
//Space Complexity:


#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    ll n;
    cin>>n;
    ll ans=0;

    while(n>0)
    {
        ll rem=n%10;
        n=n/10;
        if(rem==4 || rem==7) 
        {
            ans+=1;
        }        
        
    }
   
    if(ans==4 || ans==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    return 0;
}