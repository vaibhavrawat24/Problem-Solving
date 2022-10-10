// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a(n),b(n);

        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n;i++) cin>>b[i];

        int c1=0,c2=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i]) c1+=1;
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i]) c2+=1;
        }
        c2+=1;
        cout<<min(c1,c2)<<endl;

    }

    return 0;
}