//432A. Choosing Teams
//Problem Link: https://codeforces.com/problemset/problem/432/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,k,ans=0;
    cin>>n>>k;

    for(int i=0;i<n;i++) 
    {
        int persons;
        cin>>persons;

        if(persons+k<=5) 
        {
            ans+=1;
        }
    }

    cout<<ans/3<<endl;
 
    return 0;
}