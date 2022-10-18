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
        string s; 
        cin>>n;
        cin>>s;

        vector<int> a(n); 
        for(int i=0;i<n;i++) cin>>a[i];

        int t=0,t2=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') 
            {
                t+=max(a[i],t2);
            }
            if(s[i]=='0' || a[i]<t2)
            {
                t2=a[i];
            }            
        }
        cout<<t<<endl;
    }
 
    return 0;
}