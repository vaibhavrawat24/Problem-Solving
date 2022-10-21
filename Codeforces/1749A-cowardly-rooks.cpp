// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        int a,b;

        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
        }

        if(n>m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}