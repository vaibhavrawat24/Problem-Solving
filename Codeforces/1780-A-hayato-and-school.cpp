//1780A. Hayato and School
//Problem Link: https://codeforces.com/contest/1780/problem/A

//Time Complexity:
//Space complexity:

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

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];
  
    int odd_count = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 1) {
      odd_count++;
    }
  }
  if (odd_count >= 3) {
     cout<<"YES"<<endl;
    cout << "1 2 3" << endl;
   
    return;
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if ((a[i] + a[j]) % 2 == 1) {
        for (int k = j + 1; k < n; k++) {
          if (a[k] % 2 == 1) {
            cout<<"YES"<<endl;
            cout << i +1<< " " << j+1 << " " << k+1 << endl;
            return;
          }
        }
      }
    }
  }
  cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--) solve();
}