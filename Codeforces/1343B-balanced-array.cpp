//1343B. Balanced Array
//Problem Link: https://codeforces.com/problemset/problem/1343/B

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back
ll int a[1000000];
int main()
{
    int t;
    long long int n,sum1,sum2,d,i,j;
    cin>>t;
    while(t--)
    {
        sum1=sum2=0;
        cin>>n;

        if(n%4!=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=2; i<=n; i+=2){
                cout<<i<<" ";
                sum1+=i;
            }
            for(int i=1; i<n-2; i+=2){
                cout<<i<<" ";
                sum2+=i;
            }
            cout<<sum1-sum2<<"\n";
        }
    }
    return 0;
}