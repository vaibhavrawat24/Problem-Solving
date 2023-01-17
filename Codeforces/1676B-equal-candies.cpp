//1676B. Equal Candies
//Problem Link:

//Time Complexity: O(n log n)
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
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i=0;i<n;i++) cin>>a[i];

        sort(a.begin(),a.end());

        int temp=a[0],res=0;

        for(int i=0;i<n;i++)
        {
            res+=a[i]-temp;
        }

        cout<<res<<endl;
    }
 
    return 0;
}