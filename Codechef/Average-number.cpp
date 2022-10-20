//Average Number
//Problem Link: https://www.codechef.com/submit/AVG?tab=statement

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
        ll n,k,v,sum=0,x=0;
        cin>>n>>k>>v;
        
        vector<int> a(n);
        
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            sum+=a[i];
        }
        
        x=((n+k)*v)-sum;
        
        if(x>0 && x%k==0) cout<<x/k<<endl;
        else cout<<"-1"<<endl;
    }
 
    return 0;
}