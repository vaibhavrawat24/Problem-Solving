//1367A. Short Substrings
//Problem Link: https://codeforces.com/problemset/problem/1367/A

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
        string a,b;
        cin>>a;
        int n=a.size();

        b+=a[0];
        for(int i=1;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                b+=a[i];
                i+=1;
            }
            else b+=a[i];
        }
        b+=a[n-1];

        cout<<b<<endl;
    }
 
    return 0;
}