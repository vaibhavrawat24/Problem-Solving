//1446A. Knapsack
//Problem Link: https://codeforces.com/problemset/problem/1446/A

//time complexity:
//space complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back
template<class T> using mxpq = priority_queue<T>;
template<class T> using mnpq = priority_queue<T, vector<T>, greater<T>>;

bool prime(int n)
{
    vector<int> prime(n+1,true);
    prime[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(int j=2*i;j<=n;j+=i) prime[j]=false;
        }
    }
    if(prime[n]==true) return true;
    else return false;
}

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n,w;
        cin>>n>>w;

        vector<int> a(n),val(n);

        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            val[i]=i+1;
        }

        vector<vector<int>> dp(n+1,vector<int> (w+1,-1));;

        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<w+1;j++)
            {
                if(i==0 || j==0) dp[i][j]=0;
            }
        }

        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<w+1;j++)
            {
                
                if(a[i-1]<=j)
                {
                    dp[i][j]=max(val[i-1]+dp[i-1][j-a[i-1]],dp[i-1][j]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }

        if(dp[n][w]==0) cout<<"-1"<<endl;
        else cout<<dp[n][w]<<endl;
    }
}