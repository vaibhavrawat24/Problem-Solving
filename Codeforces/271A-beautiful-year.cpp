//271A. Beautiful Year
//Problem Link:

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n;
    cin>>n;
    while(true)
    {
        n+=1;
        int a=n/1000;
        int b=n/100%10;
        int c=n/10%10;
        int d=n%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d )
        {
            break;
        }
    }

    cout<<n<<endl;
 
    return 0;
}