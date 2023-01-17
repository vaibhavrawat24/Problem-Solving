//1374B. Multiply by 2, divide by 6
//Problem Link: https://codeforces.com/problemset/problem/1374/B

//Time Complexity:
//Space Complexity:

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

        int n;cin>>n;
        int c=0;
        while(n>1){
            if(n%6==0){
                n=n/6;
            }
            else{
                n = n*2;
            }
            c++;
        }
        if(n==1)cout<<c<<endl;
        else cout<<-1<<endl;
    }
 
    return 0;
}