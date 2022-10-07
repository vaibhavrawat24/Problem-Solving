//427A. Police Recruits
//Problem Link: https://codeforces.com/problemset/problem/427/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;
    vector<int> c(n);

    for(int i=0;i<n;i++) cin>>c[i];

    int fp=0,ans=0;

    for(int i=0;i<n;i++)
    {
        if(c[i]>0) fp+=c[i];
        else if(c[i]==-1){
            if(fp==0) ans+=1;
            else fp-=1;
        }
    }

    cout<<ans<<endl;
 
    return 0;
}