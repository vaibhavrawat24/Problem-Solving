//116A. Tram
//Problem Link: https://codeforces.com/problemset/problem/116/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,a,b,ans=0,maxi=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        ans-=a;
        ans+=b;
        maxi=max(ans,maxi);
    }

    cout<<abs(maxi)<<endl;
 
    return 0;
}