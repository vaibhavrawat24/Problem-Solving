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
        ll n,s1=0,s2=0,ans=0;
        cin>>n;

        vector<int> a(n),b(n);

        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            s1+=a[i];
        }

        for(int i=0;i<n;i++) 
        {
            cin>>b[i];
            s2+=b[i];

            if(b[i]>ans) ans=b[i];
        }

        cout<<s1+s2-ans<<endl;

    }
 
    return 0;
}