//Minimise LCS
//Problem Link: https://www.codechef.com/START61D/problems/MINLCS

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
        ll n,ans=0;
        string a,b;
        cin>>n>>a>>b;
        map<char,ll> mp,np;
        
        for(char i:a) 
        {
            mp[i]++;
        }
        
        for(char i:b) 
        {
            np[i]++;
        }
        
        for(char i='a';i<='z';i++)
        {
            ans=max(ans,min(mp[i],np[i]));
        }
        
        cout<<ans<<endl;
    }
 
    return 0;
}