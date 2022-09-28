//148A. Insomnia cure
//Problem Link: https://codeforces.com/problemset/problem/148/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int k,l,m,n,d,ct=0;
    cin>>k>>l>>m>>n>>d;

    ct=d;
    
    if(k==1 || l==1 || m==1 || n==1)
    {
        cout<<d<<endl;
    }
    else
    {
        for(int i=1;i<=d;i++)
        {
            if((i%k != 0) && (i%l!=0) && (i%m!=0) && (i%n!=0))
                ct--;
        }
        cout<<ct<<endl;
    }
    return 0;
}