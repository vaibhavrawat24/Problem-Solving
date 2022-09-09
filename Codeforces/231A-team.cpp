//231A Team
//Problem Link: https://codeforces.com/problemset/problem/231/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int ans=0;

    while(t--)
    {
        vector<int> v(3);
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }

        if(v[0]+v[1]+v[2]>=2) ans+=1;
        
    }

    cout<<ans<<endl;

    return 0;
}