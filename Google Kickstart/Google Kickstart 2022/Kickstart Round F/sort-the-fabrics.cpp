//Sort The Fabrics

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool sort1(pair<string,pair<int,int>> &x,pair<string,pair<int,int>>&y)
{
    if(x.second.first!=y.second.first) return (x.second.first < y.second.first);
    else return (x.second.second < y.second.second);

}

bool sort2(pair<string,pair<int,int>> &x,pair<string,pair<int,int>>&y)
{
    if(x.first!=y.first) return (x.first < y.first);
    else return (x.second.second < y.second.second);

}

int main() 
{
    int t;
    cin>>t;
    int temp=t;
    while(t--)
    {
        int n;
        cin>>n;
        int sol=0;
        
        vector<pair<string,pair<int,int>>>v;
        vector<pair<string,pair<int,int>>>s;

        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            int x,y;
            cin>>x>>y;
            v.push_back({s,{x,y}});
        }
        
        s=v;
        
        sort(v.begin(),v.end(),sort2);
        sort(s.begin(),s.end(),sort1);
        
        for(int i=0;i<n;i++)
        {
            if(s[i]==v[i]) sol++;
        }
         
         cout<<"Case #"<<temp-t<<": "<<sol<<endl;
    }
    return 0;
}