//707A. Brain's Photos
//Problem Link: https://codeforces.com/problemset/problem/707/A

//Time Complexity:
//Space Complexity

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
 
char c;
int a, b, color;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y') {
                color = 1;
                break;
            }
        }
        if (color == 1) {
            break;
        }
    }
    if (color == 1) {
        cout << "#Color";
    } else {
        cout << "#Black&White";
    }
}