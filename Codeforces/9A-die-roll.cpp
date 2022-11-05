//9A. Die Roll
//Problem Link: https://codeforces.com/problemset/problem/9/A

//Time Complexity:
//Space Complexity;

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int a,b;
    cin>>a>>b;

    string probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int d=max(a,b);
    cout<<probability[d]<<endl;
 
    return 0;
}