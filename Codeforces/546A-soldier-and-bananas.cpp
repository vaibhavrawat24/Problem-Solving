//546A. Soldier and Bananas
//Problem Link: https://codeforces.com/problemset/problem/546/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int  k,n,w,total=0;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++)
    {
        total+=k*i;
    }
    
    if(total<=n) cout<<"0"<<endl;
    else cout<<total-n<<endl;

 
    return 0;
}