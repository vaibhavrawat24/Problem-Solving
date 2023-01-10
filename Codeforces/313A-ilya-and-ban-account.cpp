//313A. Ilya and Bank Account
//Problem Link: https://codeforces.com/problemset/problem/313/A

//Time Complexity: O(1)
//Space Complexity: O(1)

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
    int n;
    cin>>n;

    if(n>=0) cout<<n<<endl;
    else{
        cout<<max((n/10),(n/100*10+n%10));
    }
 
    return 0;
}