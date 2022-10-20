//Different Consecutive Characters
//Problem Link: https://www.codechef.com/START61D/problems/DIFFCONSEC

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
        int n,ans=0;
        cin>>n;
        string s;
        cin>>s;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1]) ans+=1;
        }
        
        cout<<ans<<endl;
    }
 
    return 0;
}