//791A. Bear and Big Brother
//Problem Link:

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int l,b,ans=0;
    cin>>l>>b;

    while(l<=b)
    {
        l*=3;
        b*=2;
        ans+=1;
    }

    cout<<ans<<endl;
 
    return 0;
}