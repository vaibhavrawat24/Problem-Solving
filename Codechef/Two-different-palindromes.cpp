//Two Different Palindromes
//Problem Link: https://www.codechef.com/START57D/problems/TWODIFFPALIN

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
        int a,b;
        cin>>a>>b;
        
        if(a==1 || b==1) cout<<"NO"<<endl;
        else
        {
            if(a%2==1 && b%2==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
 
    return 0;
}

 