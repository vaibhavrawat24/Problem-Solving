//32B. Borze
//Problem Link: https://codeforces.com/problemset/problem/32/B

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    string str,ans;
    cin>>str;
    int n=str.size();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='.')
        {
            cout<<0;
        }
        else if(str[i]=='-' && str[i+1]=='-')
        {
            cout<<2;
            i+=1;
        }
        else{
            cout<<1;
            i+=1;
        }
    }
    cout<<endl;
 
    return 0;
}