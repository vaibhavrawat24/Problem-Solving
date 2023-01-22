//4B. Before an Exam
//Problem Link: https://codeforces.com/problemset/problem/4/B

//Time Complexity:
//Space Complexity:

// KEEP MOVING FORWARD !

#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main(){
    int n,sumtime,a,b,totalmax=0,totalmin=0;
    cin>>n>>sumtime;

    vector<int> min(n),max(n);

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        totalmin+=a;
        totalmax+=b;
        min[i]=a;
        max[i]=b;
    }

    if(sumtime<totalmin || sumtime>totalmax)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES\n";
            if(sum_time<time){
            for(i=0;i<n;i++){
                    ll df=b[i]-a[i];
                    j=1;
                while(j<=df){
                        if(sum_time==time)
                        break;
                    sum_time++;
                    v[i]++;
                    j++;
                }
            }
        }
        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

 
    return 0;
}