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
        int n,c=0;
        cin>>n;

        vector<int> a(n);

        for(int i=0;i<n;i++) cin>>a[i];

        c=10-n;

        cout<<6*c*(c-1)/2<<endl;
    }
 
    return 0;
}