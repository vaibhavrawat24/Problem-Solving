//Even Splits
//Problem Link: https://www.codechef.com/START57D/problems/EVENSPLIT

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
        int n,os=0,zs=0;
        cin>>n;
        
        string s;
        cin>>s;
        
        if(s.size()<=2) 
        {
            cout<<s<<endl;
            continue;
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1') os+=1;
            else zs+=1;
        }
        
        string lex_small="";
        
        while(zs--)
        {
            lex_small+='0';
        }
        
        while(os--)
        {
            lex_small+='1';
        }
        
        cout<<lex_small<<endl;
        
        
    }
 
    return 0;
}