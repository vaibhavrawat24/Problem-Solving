//281A. Word Capitalization
//Problem Link: https://codeforces.com/problemset/problem/281/A

//Time Complexity:
//Space complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    string s;
    cin>>s;

    s[0]=toupper(s[0]);
    cout<<s<<endl;

    return 0;
}