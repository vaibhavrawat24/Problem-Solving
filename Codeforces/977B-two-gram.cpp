//977B. Two-gram
//Problem Link: https://codeforces.com/problemset/problem/977/B

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back
template<class T> using mxpq = priority_queue<T>;
template<class T> using mnpq = priority_queue<T, vector<T>, greater<T>>;

string str;
 
int call(string sub){
    int cnt=0,maxi=0;
 
    for(int i=0;i<str.size()-1;i++){
        if(str[i]==sub[0] && str[i+1]==sub[1])
            cnt++;
 
 
    }
 
    return cnt;
 
 
}
 
int main(){
    int maxi=0,n;
    string gram;
 
    cin>>n;
    cin>>str;
 
    for(int i=0;i<str.size()-1;i++){
        string sub= str.substr(i,2); //substr(index, length)
 
        int temp= call(sub);
 
        if(temp>maxi){
            maxi= temp;
            gram= sub;
        }
    }
 
    cout<<gram<<endl;
 
}