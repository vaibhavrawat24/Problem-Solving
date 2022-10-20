//Odd Sum Pair
//Problem Link: https://www.codechef.com/START61D/problems/ODDSUMPAIR

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
        int a,b,c;
        cin>>a>>b>>c;
        
        if((a+b)%2!=0 || (b+c)%2!=0 || (c+a)%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}