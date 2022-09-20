//282A. Bit++
//Problem Link: https://codeforces.com/problemset/problem/282/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,x=0;
    cin>>n;
    string a;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a=="--X" || a=="X--") x-=1;
        else if(a=="++X" || a=="X++") x+=1;

    }

    cout<<x<<endl;
 
    return 0;
}