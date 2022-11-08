//131A. cAPS lOCK
//Problem Link: https://codeforces.com/problemset/problem/131/A

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back
template<class T> using mxpq = priority_queue<T>;
template<class T> using mnpq = priority_queue<T, vector<T>, greater<T>>;

bool prime(int n)
{
    vector<int> prime(n+1,true);
    prime[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(int j=2*i;j<=n;j+=i) prime[j]=false;
        }
    }
    if(prime[n]==true) return true;
    else return false;
}

int iscaps(string s)
{
    int c=0,d=0,n=s.size();
    for(int i=1;i<n;i++)
    {
        if(islower(s[i]))
        {
            c=1;
            break;
        }
    }
    if(isupper(s[0])) d=1;

    if(c==0 && d==1) return 0;
    else if(c==1) return 1;
    else return 2;
}
 
int main(){
    string s;
    cin>>s;

    if(iscaps(s)==0)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);

        cout<<s<<endl;
    }
    else if(iscaps(s)==2){
        transform(s.begin(),s.end(),s.begin(),::tolower);

        s[0]=::toupper(s[0]);

        cout<<s<<endl;    
    }
    else{
        cout<<s<<endl;
    }
 
    return 0;
}