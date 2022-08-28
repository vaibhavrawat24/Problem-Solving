#include <bits/stdc++.h>
using namespace std;

int max(vector<int> dup)
{
    return *max_element(dup.begin(), dup.end());
}

bool duplicate(vector<int> dup,int n)
{
    if(find(dup.begin(),dup.end(),n)!=dup.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int NumberOfRecordBreakingDays(int n, vector<int> v) 
{
    vector<int> dup(n);
    int count=0;
    if(n==0) return 0;
    else if(n==1 && v[0]==0) return 0;
    else if(n==1 && v[0]!=0) return 1;
    
    for(int i=0;i<n;i++)
    {
        if(i==0 && v[i]>v[i+1] && duplicate(dup,v[i])==false && v[i]>max(dup))
        {
            count+=1;
            dup.push_back(v[i]);
        }
        else if(i==n-1 && v[i]>v[i-1] && duplicate(dup,v[i])==false && v[i]>max(dup))
        {
            count+=1;
            dup.push_back(v[i]);
        }
        else if(v[i]>v[i-1] && v[i]>v[i+1] && duplicate(dup,v[i])==false && v[i]>max(dup)) 
        {
            count+=1;
            dup.push_back(v[i]);
        }
    }
    return count;
  

  return 0;
}

int main() {
  int t;
  cin >> t;
  for (int i=1; i<=t; i++) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    cout << "Case #" <<t<< ": " << NumberOfRecordBreakingDays(n,v) << endl;
  }
  return 0;
}