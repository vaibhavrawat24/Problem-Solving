//1472B. Fair Division
//Problem Link: https://codeforces.com/problemset/problem/1472/B

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

void solve()
{
        ll n,a;
        cin>>n;

        int div = 0, sum = 0,one = 0;
      
        for(int i=0; i<n; i++){
            cin>>a;
            if(a == 1){
                one++;
                sum++;
            }
            else
                sum +=2;
        }
        if(sum % 2 == 0){
            div = sum/2;
            if(div % 2 == 0){
                cout<<"YES"<<endl;
            }
            else{
                if(one){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        else{
            cout<<"NO"<<endl;
        }

}

int main(){
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
 
    return 0;
}