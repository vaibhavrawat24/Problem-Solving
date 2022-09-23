//677A. Vanya and Fence
//Problem Link: https://codeforces.com/problemset/problem/677/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,h,a,ans=0;
    cin>>n>>h;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>h) ans+=2;
        else ans+=1;
    }

    cout<<ans<<endl;
 
    return 0;
}