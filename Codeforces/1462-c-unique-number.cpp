//1462C. Unique Number
//Problem Link: https://codeforces.com/problemset/problem/1462/C

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x=9,y=0,n;
    cin>>n;
        
    if(n>45)
    {
        cout<<"-1"<<endl;
        return;
    }
    
    while(n-x>0)
    {
        n=n-x;
        y++;
        x--;
    }
    
    cout<<n;
    
    for(int i=x+1;i<10;i++) cout<<i;
    
    cout<<"\n";
}

int main()
{
    int t;
    cin>>t;
    
    while(t--) solve();
}