//977A. Wrong Subtraction
//Problem Link: https://codeforces.com/problemset/problem/977/A

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,k;
    cin>>n>>k;

    for(int i=0;i<k;i++)
    {
        if(n%10==0) n=n/10;
        else n-=1;
    }
    cout<<n<<endl;
 
    return 0;
}