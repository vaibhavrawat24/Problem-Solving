//Chef And Balloons
//Problem Link: https://www.codechef.com/submit/CHBLLNS?tab=statement

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main()
{
    
    int t;
	cin>>t;
	while(t--)
	{
	    ll  r,g,b;
	    cin>>r>>g>>b;
	    ll k;
	    cin>>k;
	    ll j = min(r,k-1)+min(g,k-1)+min(b,k-1);
	    j++;
	    cout<<j<<endl;
	}
    
    return 0;
}