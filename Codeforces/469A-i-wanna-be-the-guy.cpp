//469A. I Wanna Be the Guy
//Problem Link: https://codeforces.com/problemset/problem/469/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;
    set<int> s;

    int p,q,x,y;
    cin>>p;

    for(int i=0;i<p;i++)
    {
        cin>>x;
        s.insert(x);
    }

    cin>>q;

    for(int i=0;i<q;i++)
    {
        cin>>y;
        s.insert(y);
    }

    if(s.size()==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
 
    return 0;
}