// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int m,n,p,ans=0;
        cin>>m>>n>>p;

        int walkt[m][n];

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>walkt[i][j];
            }
        }

        for(int i=0;i<n;i++)
        {
            int step=0;
            for(int j=0;j<m;j++)
            {
                if(step<walkt[j][i]) step=walkt[j][i];
            }

            ans+=step-walkt[p-1][i];
        }
        cout<<"Case #"<<i+1<<": "<<ans<<endl;
    }
 
    return 0;
}