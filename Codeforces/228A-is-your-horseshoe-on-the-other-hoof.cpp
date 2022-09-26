//228A. Is your horseshoe on the other hoof?
//Problem Link: https://codeforces.com/problemset/problem/228/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    vector<int> a(4);
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    int ans=0;

    for(int i=0;i<4;i++)
    {
        if(a[i]==a[i+1]) ans+=1;
    }
 
    cout<<ans<<endl;
    
    return 0;
}