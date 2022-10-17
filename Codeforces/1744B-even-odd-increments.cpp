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
        ll n,q,ev=0,od=0,ans=0;
        cin>>n>>q;
        vector<ll> a(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0) ev+=1;
            else od+=1;
            ans+=a[i];
        }

        while(q--)
        {
            int temp,he;
            cin>>temp>>he;
            if(temp==0)
            {
                ans+=he*ev;
                if(he%2!=0) 
                {
                    od+=ev;
                    ev=0;
                }
            }

            if(temp==1)
            {
                ans+=he*od;
                if(he%2!=0)
                {
                    ev+=od;
                    od=0;
                }
            }
            cout<<ans<<endl;
        }
        
    }

    return 0;
}