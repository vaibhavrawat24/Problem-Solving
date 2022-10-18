//151A. Soft Drinking
//Problem Link: https://codeforces.com/problemset/problem/151/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int  n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    cout<<min(min(k*l/nl,c*d),p/np)/n<<endl;
 
    return 0;
}