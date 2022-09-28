//144A. Arrival of the General
//Problem Link: https://codeforces.com/problemset/problem/144/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    int maxi=a[0],k=0,mini=a[0],l=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
            k=i;
        }
        
    }

    for(int i=1;i<n;i++)
    {
        if(a[i]<=mini)
        {
            mini=a[i];
            l=i;
        }
    }

    if(k==0 && l==n-1)
    {
        cout<<0<<endl;
        return 0;
    }

    if(k<l)
    {
        cout<<(k)+(n-1-l)<<endl;
    }
    else{
        cout<<(k)+(n-1-l-1)<<endl;
    }
    
    return 0;
}