//705A Hulk
//Problem Link: https://codeforces.com/problemset/problem/705/A

//Time Complexity: O(n)
//Space Complexity: O(n)

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        if(i%2==0) cout<<"I hate ";
        else cout<<"I love ";

        if(i!=n-1) cout<<"that ";
        else cout<<"it ";
    }
 
    return 0;
}