//486A. Calculating Function
//Problem Link: https://codeforces.com/problemset/problem/486/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    ll n, a;
    cin >> n;
    if(n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    cout << a << endl;
 
    return 0;
}