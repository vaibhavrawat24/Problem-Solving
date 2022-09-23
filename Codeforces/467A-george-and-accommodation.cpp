//467A. George and Accommodation
//Problem Link: https://codeforces.com/problemset/problem/467/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,a,b,ans=0;
    cin>>n;
 
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b-a>=2) ans+=1;
    }

    cout<<ans<<endl;

    return 0;
}