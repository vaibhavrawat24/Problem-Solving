//581A. Vasya the Hipster
//Problem Link: https://codeforces.com/problemset/problem/581/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int a,b,temp=0;
    cin>>a>>b;

    if(a<b) 
    {
        cout<<a<<" ";
        temp=b-a;
        cout<<temp/2<<endl;
    }
    else
    {
        cout<<b<<" ";
        temp=a-b;
        cout<<temp/2<<endl;
    } 
    return 0;
}