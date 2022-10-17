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
        vector<int> a(n),v(50,-1);

        for(int i=0;i<n;i++) cin>>a[i];

        string s;
        cin>>s;
      
        bool temp=true;
        for(int i=0;i<n;i++)
        {
            if(v[a[i]-1]==-1) v[a[i]-1]=s[i]-'a';
            else
            {
                if(v[a[i]-1]!=s[i]-'a')
                {
                    temp=false;
                    break;
                }
            }
        }

        if(temp==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}