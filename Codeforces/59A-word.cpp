//59A. Word
//Problem Link: https://codeforces.com/problemset/problem/59/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    string x;
    cin>>x;

    int upp=0,low=0;

    for(int i=0;i<x.size();i++)
    {
        if(x[i]<=90 && x[i]>=65) upp+=1;
        else if(x[i]<=122 && x[i]>=97) low+=1;
    }

    if(upp>low)  transform(x.begin(), x.end(), x.begin(), ::toupper);
    else if(upp<low) transform(x.begin(), x.end(), x.begin(), ::tolower);
    else transform(x.begin(), x.end(), x.begin(), ::tolower);

    cout<<x<<endl;
 
    return 0;
}