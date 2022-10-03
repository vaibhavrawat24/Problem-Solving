//1335A. Candies and Two Sisters
//Problem Link:

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

        if(n<3)
        {
            cout<<"0"<<endl;
            continue;
        }

        if(n%2==0) cout<<n/2-1<<endl;
        else cout<<n/2<<endl;
    }
 
    return 0;
}