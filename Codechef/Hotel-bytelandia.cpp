//Hotel Bytelandia
//Problem Link: https://www.codechef.com/submit/HOTEL

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a(n),b(n);
        set<int> s;

        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int maxguest=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(b[j]>=b[i] && b[i]>a[j])
                count++;
                maxguest=max(maxguest,count);
            }
        }
    cout<<maxguest<<endl;

    }
 
    return 0;
}