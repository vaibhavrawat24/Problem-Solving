//785A. Anton and Polyhedrons
//Problem Link: https://codeforces.com/problemset/problem/785/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,ans=0;
    cin>>n;
    string a="Tetrahedron",b="Cube",c="Octahedron",d="Dodecahedron",e="Icosahedron",s;

    for(int i=0;i<n;i++)
    {
        cin>>s;

        if(s==a) ans+=4;
        else if(s==b) ans+=6;
        else if(s==c) ans+=8;
        else if(s==d) ans+=12;
        else ans+=20;
    }

    cout<<ans<<endl;
 
    return 0;
}