//155A. I_love_%username%
//Problem Link: https://codeforces.com/problemset/problem/155/A

//Time Complexity:
//Space Complexity;

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,points;
    cin>>n>>points;
    int min(points),max(points),amazing(0);
    while(n--)
    {
        cin>>points;
        if(points<min)
        {
            min=points;
            amazing++;
        }
        if(points>max)
        {
            max=points;
            amazing++;
        }
    }
    cout<<amazing<<endl;
    return 0;

}