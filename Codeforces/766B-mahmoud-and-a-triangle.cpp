//766B. Mahmoud and a Triangle
//Problem Link: https://codeforces.com/problemset/problem/766/B

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
 
int main(){
    int n,i,x,j,a,b,c,check;

    while (cin >> n)
    {
        vector <int> v;

        for (i=0; i<n; i++)
        {
            cin >> x;
            v.push_back(x);
        }

        sort (v.begin(),v.end());

        check = 0;

        for (j=0; j<n-2; j++)
        {
            a = v[j];
            b = v[j+1];
            c = v[j+2];

            if (a+b > c && b+c > a && c+a > b)
            {
                check = 1;
                cout << "YES" << endl;
                break;
            }
        }

        if (check == 0)
            cout << "NO" << endl;
    }

 
    return 0;
}