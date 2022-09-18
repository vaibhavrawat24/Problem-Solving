//136A. Presents
//Problem Link: https://codeforces.com/problemset/problem/136/A

//Time Complexity:
//Space complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,b;
    cin>>n;
    vector<int> v(n+1);

    for(int i=1;i<=n;i++) 
    {
        cin>>b;
        v[b]=i;
    }

    for(int i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
 
    return 0;
}