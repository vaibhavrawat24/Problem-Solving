//510A. Fox And Snake
//Problem Link: https://codeforces.com/problemset/problem/510/A

//Time Comoplexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,m,odd=0;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            if(odd==0)
            {
                for(int i=0;i<m-1;i++)
                {
                    cout<<".";
                }
                cout<<"#";
                odd=1;
            }
            else
            {
                cout<<"#";
                for(int i=1;i<m;i++)
                {
                    cout<<".";
                }
                odd=0;
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<m;i++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
    }
 
    return 0;
}