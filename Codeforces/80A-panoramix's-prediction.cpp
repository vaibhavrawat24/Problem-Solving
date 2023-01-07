//80A. Panoramix's Prediction
//Problem Link: https://codeforces.com/problemset/problem/80/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back
template<class T> using mxpq = priority_queue<T>;
template<class T> using mnpq = priority_queue<T, vector<T>, greater<T>>;

bool prime2(int n,int m)
{
    vector<int> prime(50,true);
    prime[1]=false;
    for(int i=2;i<=50;i++)
    {
        if(prime[i]==true)
        {
            for(int j=2*i;j<=50;j+=i) 
            {
                if(j>=50) continue;
                else prime[j]=false;
            }
        }
    }

    vector<int> ans;
    for(int i=2;i<50;i++)
    {
        if(prime[i]==true) ans.push_back(i);
    }

    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]==n && ans[i+1]==m) return true;
    }

    return false;
}

 
int main(){
    int n,m;
    cin>>n>>m;

    if(prime2(n,m)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}