//617A. Elephant
//Problem Link: https://codeforces.com/problemset/problem/617/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int x;
    cin>>x;

    int ans=x/5;
    if(x%5!=0) ans+=1;

    cout<<ans<<endl;
 
    return 0;
}