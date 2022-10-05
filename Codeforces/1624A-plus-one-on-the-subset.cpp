//1624A. Plus One on the Subset

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

        vector<int> v(n);

        for(int i=0;i<n;i++) cin>>v[i];

        sort(v.begin(),v.end());

        cout<<(v[n-1]-v[0])<<endl;
    }
 
    return 0;
}