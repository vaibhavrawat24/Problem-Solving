// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,temp=0;
        cin>>n;

        vector<int> sup(n+1);

        for(int i=1;i<=n;i++)
        {
            cin>>sup[i];
        }

        for(int i=1;i<n;i++)
        {
            if(sup[i+1]<=sup[i] && sup[i+1]!=0)
            {
                temp=-1;
                break;
            }
            else
            {
                sup[i+1]=abs(sup[i]+sup[i+1]);
            }
        }

        if(temp==-1)
        {
            cout<<temp;
        }
        else
        {
            for(int j=1;j<=n;j++)
            {
                cout<<sup[j]<<" ";
            }
        }
        cout<<endl;
    }
 
    return 0;
}