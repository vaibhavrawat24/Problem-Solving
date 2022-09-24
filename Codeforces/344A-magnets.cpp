//344A. Magnets
//Problem Link: https://codeforces.com/problemset/problem/344/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,i,c=0;
    cin>>n;
    int a[100000];
    i=0;
    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<n; i++)
    {
        if(a[i]!=a[i+1])
            c++;
    }
    cout<<c<<endl;
 
    return 0;
}