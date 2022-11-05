//749A. Bachgold Problem
//Problem Link: https://codeforces.com/problemset/problem/749/A

//Time Complexity;
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;

    if(n%2==1) 
    {
        n/=2;
        n--;
        cout<<n+1<<endl<<3<<' ';
    }
    else
    {
        n/=2;
        cout<<n<<endl;
    }
    
    for(int i=0;i<n;i++) cout<<2<<' ';
    cout<<endl;
    
    return 0;
}