//112A Petya And Strings
//Problem Link:

//Time complexity:
//Space Complexity:

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b; 
    transform(a.begin(), a.end(), a.begin(), ::toupper);  
    transform(b.begin(), b.end(), b.begin(), ::toupper);


    if(a<b) cout<<"-1"<<endl;
    else if(a>b) cout<<"1"<<endl;
    else cout<<"0"<<endl;

    return 0;
}