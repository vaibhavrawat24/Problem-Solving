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
        vector<int> a;
        
        a.push_back(1);

        for(int i=n;i>1;i--) a.push_back(i);
        
        for(auto i:a) cout<<i<<" ";
        
        cout<<endl;
   
    }
 
    return 0;
}