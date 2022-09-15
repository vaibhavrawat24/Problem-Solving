//339A. Helpful Maths
//Problem Link: https://codeforces.com/problemset/problem/339/A

//Time Complexity:
//Space Complexity:


#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    string s;
    cin>>s;
    vector<int> v;
    string ans;

    for(int i=0;i<s.size();i+=2)
    {
        v.pb(s[i]);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        if(i==0)
        {
            ans+=v[i];
        }
        else{
            ans+='+';
            ans+=v[i];
        }
    }

    cout<<ans<<endl;

    return 0;

}