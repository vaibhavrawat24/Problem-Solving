//A. Arpa’s hard exam and Mehrdad’s naive cheat
//Problem Link: https://codeforces.com/problemset/problem/742/A

//Time Complexity:
//Space complexity:

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
    ll n,x=8,y=8;
    cin>>n;

    if(n==0)
    {
        cout<<"1";
        return 0;
    }

    if(n%4==0) cout<<"6"<<endl;
    else if(n%4==1) cout<<"8"<<endl;
    else if(n%4==2) cout<<"4"<<endl;
    else if(n%4==3) cout<<"2"<<endl;
 
    return 0;
}