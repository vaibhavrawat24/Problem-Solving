//758A. Holiday Of Equality
//Problem Link: https://codeforces.com/problemset/problem/758/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main()
{
    int n,i,max;

    while (cin >> n)
    {
        vector<int> arr(n);
        int sum=0;

        for(i=0;i<n;i++) cin>>arr[i];

        sort(arr.begin(),arr.end());

        max=arr[n-1];

        for(i=0;i<n-1;i++) sum+=abs(max-arr[i]);

        cout<<sum<<endl;
    }
 
    return 0;
}