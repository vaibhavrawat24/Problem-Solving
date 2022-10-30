//1433A. Boring Apartments
//Problem Link: https://codeforces.com/problemset/problem/1433/A

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
        vector<int> v;
        v.pb(1);
        v.pb(11);
        v.pb(111);
        v.pb(1111);
        for(int i=2; i<10; i++){
            for(int j=0; j<4; j++){
                int d = v[j] * i;
                v.pb(d);
            }
        }
        int c = 0;
        for(int i=0; i<v.size(); i++){
            if(v[i] == n){
                if(v[i] < 10){
                    c++;
                }
                else if(v[i] < 100){
                    c += 2;
                }
                else if(v[i] <1000){
                    c += 3;
                }
                else if(v[i] < 10000){
                    c += 4;
                }
                break;
            }
            if(v[i] < 10){
                c++;
            }
            else if(v[i] < 100){
                c += 2;
            }
            else if(v[i] <1000){
                c += 3;
            }
            else if(v[i] < 10000){
                c += 4;
            }

        }
        cout<<c<<endl;
    }
 
    return 0;
}