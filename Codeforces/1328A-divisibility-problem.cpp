//1328A. Divisibility Problem
//Problem Link: https://codeforces.com/problemset/problem/1328/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b,steps=0;
        cin>>a>>b;

        if(a%b==0) 
        {
            cout<<"0"<<endl;
            continue;
        }
        else 
        {
            steps=a%b;

            cout<<b-steps<<endl;
        }
    }
 
    return 0;
}