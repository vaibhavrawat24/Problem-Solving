#include<bits/stdc++.h>
#define ll long long
using namespace std;

int v[200001],n;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin >> n;
        for(int i=1;i<=n;++i) cin >> v[i];

        for(int i=1,x;i<=n;++i) 
        {
            cin >> x;
            v[i]=x-v[i];
        }

        sort(v+1,v+1+n);
        
        int i=n,j=1,s=0;

        for(;;s++,i--,j++) 
        {
            for(;j<=n&&-v[i]>v[j];)
            {
                j++;
            }
            if(j>=i) break;
        }
        cout << s << endl;
    }
    return 0;
}
