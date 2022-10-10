// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

void gcm()
{
    int n,a,sum=0;
    cin>>n;

    vector<int> gy(n);

    for(int i=0;i<n;i++) cin>>gy[i];

    for(int i=0;i<n-2;i++)
    {
        if(__gcd(gy[i],gy[i+2])>__gcd(gy[i],gy[i+1]))
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

}

int main()
{
    int t;
    cin>>t;

    while(t--) gcm();
    
    return 0;
}