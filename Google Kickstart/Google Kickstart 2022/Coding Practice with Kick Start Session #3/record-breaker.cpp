//Record Breaker (Coding Practice with Kick Start Session #3 - Kick Start 2022)

/*
Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:

Either it is the first day, or the number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.

Sample Input :                                       Sample Output:
4                                                    
8                                                    Case #1: 2
1 2 0 7 2 0 2 0                                      
6                                                    Case #2: 1
4 8 15 16 23 42                                      
9                                                    Case #3: 3
3 1 4 1 5 9 2 6 5
6                                                    Case #4: 0
9 9 9 9 9 9
*/

//Time Complexity:
//Space Complexity:

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