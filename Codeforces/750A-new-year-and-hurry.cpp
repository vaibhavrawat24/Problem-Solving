//750A. New Year and Hurry
//Problem Link: https://codeforces.com/problemset/problem/750/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,k,i,sum,res,c;

    while(cin>>n>>k)
    {
        res=240-k,sum=0,c=0;

        for(i=1;i<=n;i++)
        {
            sum+=5*i;

            if(sum>res) break;

            c=c+1;
        }

        cout<<c<<endl;
    }

    
 
    return 0;
}