//1560A. Dislike of Threes
//Problem Link: https://codeforces.com/problemset/problem/1560/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
   int arr[1001];

    int j = 1;
    for(int i = 1 ; i <= 1666 ; i++ ){
        if(i%3 != 0)
        {
            if(i%10 != 3){
                arr[j] = i;
                j = j + 1;
            }

        }

    }

    int t;
    cin>>t;
    int k;
    while(t--){
        cin>>k;
        cout<<arr[k]<<endl;
    }

    return 0;
}