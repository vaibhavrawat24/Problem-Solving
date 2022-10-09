//732A. Buy a Shovel
//Problem Link: https://codeforces.com/problemset/problem/732/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int a,b;
    cin>>a>>b;

    if(a%10==0 || a%10==b)
    {
        cout<<1<<endl;
        return 0;
    }

    int i=2;
    while(i<10)
    {
        if((a*i)%10==0 || (a*i)%10==b)
        {
            cout<<i<<endl;
            break;
        }
        i+=1;
    }
 
    return 0;
}