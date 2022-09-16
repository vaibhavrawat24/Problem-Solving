//236A. Boy or Girl
//Problem Link: https://codeforces.com/contest/236/problem/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    string s;
    cin>>s;
    set<int> ans;
    for(int i=0;i<s.size();i++) ans.insert(s[i]);

    if(ans.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;
}   