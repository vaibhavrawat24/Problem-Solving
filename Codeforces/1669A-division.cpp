//1669A. Division?
//Problem Link: https://codeforces.com/problemset/problem/1669/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int r;
        cin>>r;
        if(r>=1900) cout<<"Division 1"<<endl;
        else if(r<=1899 && r>=1600) cout<<"Division 2"<<endl;
        else if(r<=1599 && r>=1400) cout<<"Division 3"<<endl;
        else cout<<"Division 4"<<endl;
    }
 
    return 0;
}