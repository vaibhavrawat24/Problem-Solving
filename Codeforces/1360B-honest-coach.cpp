//1360B. Honest Coach
//Problem Link: https://codeforces.com/problemset/problem/1360/B

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<int> v;
        int diff = 0;
        for(int i = 1;i<n;i++){
           diff = a[i]-a[i-1];
           v.push_back(diff);
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
 
    return 0;
}