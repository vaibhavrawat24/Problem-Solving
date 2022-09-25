//158A Next Round
//Problem Link: https://codeforces.com/problemset/problem/158/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a,b=0,ans[10000];
    cin>>n>>k;

    for(int i=1;i<=n;i++) 
    {
        cin>>a;
        ans[i]=a;
    }
    for (int j=1;j<=n;j++)
    {
        if(ans[j]>=ans[k] && ans[j]>0) 
        {
            b++;
        }
    }

    cout<<b;
}