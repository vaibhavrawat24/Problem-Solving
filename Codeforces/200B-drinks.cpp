//200B. Drinks
//Problem Link: https://codeforces.com/problemset/problem/200/B

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

    double sum=0.0,ans=0.0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    ans+=sum/n;

    cout<<fixed<<setprecision(12)<<ans<<endl;
 
    return 0;
}