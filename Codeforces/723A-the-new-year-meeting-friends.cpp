//723A. The New Year: Meeting Friends
//Problem Link: https://codeforces.com/problemset/problem/723/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    vector<int> a(3);

    for(int i=0;i<3;i++) cin>>a[i];

    sort(a.begin(),a.end());

    cout<<a[2]-a[0]<<endl;
 
    return 0;
}