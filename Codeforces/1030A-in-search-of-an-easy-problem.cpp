//1030A. In Search of an Easy Problem
//Problem Link: https://codeforces.com/problemset/problem/1030/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,i;
    cin>>n;
    while(n>0)
    {
        cin>>i;
        if(i==1)
        {
            cout<<"HARD"<<endl;
            return 0;
        }
        n--;
    }
    cout<<"EASY"<<endl;
 
    return 0;
}