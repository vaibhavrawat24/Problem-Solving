//Record Breaker

#include <bits/stdc++.h>
using namespace std;

int NumberOfRecordBreakingDays(int n, vector<int> v) {
  int maxV=-1;
  int count=0;
  
  for(int i=0;i<n;i++)
  {
      if(v[i]>maxV && (i==n-1 || v[i]>v[i+1]))
      {
          count++;
      }
      maxV=max(maxV,v[i]);
  }
  
  return count;
}

int main() {
  int t;
  cin >> t;
  for (int i = 1; i <= t;i++) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    cout << "Case #" << i << ": " << NumberOfRecordBreakingDays(n,v) << endl;
  }
  return 0;
}