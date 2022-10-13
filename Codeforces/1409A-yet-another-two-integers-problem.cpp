//1409A. Yet Another Two Integers Problem
//Problem Link: https://codeforces.com/problemset/problem/1409/A

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
        int a,b;
        cin>>a>>b;

        if(b<a)
        {
            swap(a,b);
        }

        ll sub=0,sum=0,div=0,mod=0;
        sub=b-a;
        div=sub/10;
        mod=sub%10;
        sum=div;

        if(mod>0)
        {
            sum++;
        }

        cout<<sum<<endl;
    }
 
    return 0;
}