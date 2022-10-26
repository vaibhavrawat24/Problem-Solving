//1367B. Even Array
//Problem Link: https://codeforces.com/problemset/problem/1367/B

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
        int n,c=0,flag=0;
        cin>>n;
        vector<int> a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int odd = 0,even = 0;

        for(int i=0; i<n; i++)
        {
            if(i%2 != a[i] % 2)
            {
                if(a[i] % 2 == 1)odd++;
                else even++;
            }
        }
        if(odd != even)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<even<<endl;
        }

    }
 
    return 0;
}