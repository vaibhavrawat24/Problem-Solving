//Non-Negative Product
//Problem Link: https://www.codechef.com/START57D/problems/MAXEXP

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,z=0,neg=0;
        cin>>n;
        vector<int> a(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
            if(a[i]<0) neg+=1;
            if(a[i]==0) z=1;
        }
        
        if((neg==0 || neg%2==0) || z==1) cout<<"0"<<endl;
        else cout<<"1"<<endl;
        
    }
 
    return 0;
}