//1003A. Polycarp's Pockets
//Problem Link: https://codeforces.com/problemset/problem/1003/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++) 
    {
        int x;
        cin>>x;
        mp[x]++;
    }

    vector<pair<int,int>> v;

    copy(mp.begin(),mp.end(),back_inserter(v));

    sort(v.begin(), v.end(),
            [](const pair<int,int> &l, const pair<int,int> &r)
            {
                if (l.second != r.second) {
                    return l.second < r.second;
                }
 
                return l.first < r.first;
            });

    auto i=v.back();

    cout<<i.second<<endl;

    return 0;
}