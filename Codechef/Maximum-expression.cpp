//Maximum Expression
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
        int n,minus=0,plus=0;
        cin>>n;
        string s;
        cin>>s;
        string ans_max;
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='-') minus+=1;
            else if(s[i]=='+') plus+=1;
            else v.pb(s[i]-'0');
        }
        
        sort(v.rbegin(),v.rend());
        
        for(int i=0;i<v.size()-(minus+plus);i++)
        {
            ans_max+=(v[i]+'0');
        }
        
        int k=v.size()-plus-minus;
        
        if(plus!=0 || minus!=0)
        {
            if(plus!=0)
            {
                for(int i=0;i<2*plus;i++)
                {
                    if(i%2==0) ans_max+='+';
                    else
                    {
                        ans_max+=(v[k]+'0');
                        k++;
                    }
                }
            }
            
            if(minus!=0)
            {
                for(int i=0;i<2*minus;i++)
                {
                    if(i%2==0) ans_max+='-';
                    else
                    {
                        ans_max+=(v[k]+'0');
                        k++;
                    }
                }
            }
        }
        
        cout<<ans_max<<endl;
    }
    
    return 0;
}

 