//268A. Games
//Problem Link: https://codeforces.com/problemset/problem/268/A

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
     
    vector<int> h(n),g(n);

    for(int i=0;i<n;i++)
    {
        cin>>h[i]>>g[i];

        for(int j=0;j<i;j++)
        {
            if(h[i]==g[j]) ans+=1;
            if(g[i]==h[j]) ans+=1;
        }
    }

    cout<<ans<<endl;
 
    return 0;
}